#include <stdio.h>
/**
 * main -entry point
 *
 * Return: 0 on succesfull
 */
int main(void)
{
printf("size of a char: %d byte(s)\n", sizeof(char));
printf("size of an int: %d bytes(s)\n", sizeof(int));
printf("size of long  int: %d bytes(s)\n", sizeof(long int));
printf("size of long long: %d byte(s)\n", sizeof(long long int));
printf("size of float: %d byte(s)\n", sizeof(float));
return (0);
}
