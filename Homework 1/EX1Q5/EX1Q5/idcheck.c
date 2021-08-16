#include "idcheck.h"
int GetCheckDigit(unsigned int id)
{
    int currentDigit, doubleCurrentDigit, sum = 0, returnValue;
    for (int i = 0; i < ID_LENGTH_NO_CHECK_DIGIT; ++i)
    {
        currentDigit = id % 10;
        id = id / 10;
        if (i % 2 == 0)
        {
            doubleCurrentDigit = currentDigit * 2;
            currentDigit = doubleCurrentDigit > 9 ? (doubleCurrentDigit)-9 : doubleCurrentDigit;
        }
        sum += currentDigit;
    }
    returnValue = 10 - (sum % 10);
    return returnValue != 10 ? returnValue : 0;
}

bool CheckID(unsigned int id)
{
    if (id > MAX_ID)
        return false;
    int checkDigit = id % 10;
    if (checkDigit == GetCheckDigit(id))
        return true;
    else
        return false;
}