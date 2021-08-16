void PrintChar(char c, int n)
{
    for (int i = 0; i < n; i++)
        printf("%c", c);
}

void PrintLine(int spaces, int stars)
{
    PrintChar(' ', spaces);
    PrintChar('*', stars);
    printf("\n");
}

int PrintDiamond(int width)
{
    int returnValue = 0;
    if (width % 2 == 0 || width < 0)
    {
        returnValue = -1;
    }
    else
    {
        int smallerHalf = width / 2;
        for (int i = 1; i <= width; i += 2)
            PrintLine(smallerHalf - (i / 2), i);
        for (int i = width - 2; i > 0; i -= 2)
            PrintLine(smallerHalf - (i / 2), i);
    }
    return returnValue;
}
