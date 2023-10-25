#include <stdio.h>

/**
 * main - should print the size of various 
 * datatypes such as:
 * [char, int, long_int, long_long_int, float]
 * Return: 0 is success and none-zero if failed
 */
int main(void)
{
  printf("Size of a char: %i byte(s)\n", sizeof(char));
  printf("Size of an int: %i byte(s)\n", sizeof(int));
  printf("Size of a long int: %i byte(s)\n", sizeof(long int));
  printf("Size of a long long int: %i byte(s)\n", sizeof(long long int));
  printf("Size of a float: %i byte(s)\n", sizeof(float));
  return (0);
}
