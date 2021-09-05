#include <stddef.h>

/**
 * 80 is standard length of a line
 */
#define LENGTH 80

 /**
  * calculates length of a c-style string
  *
  * @param str Pointer to buffer of characters
  * @return length of string
  */
size_t GetStrLen(char* str);