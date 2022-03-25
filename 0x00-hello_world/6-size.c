#include <stdio.h>
/**
 * main -entry point
 *
 * Return: 0 on succesfull
 */
int main(void)
{
printf("the size of a char: %d byte(s)\n", sizeof(char));
printf("the size of int: %d bytes(s)\n", sizeof(int));
printf("the size of long  int: %d bytes(s)\n", sizeof(long int));
printf("the size of double: %d byte(s)\n", sizeof(double));
printf("the size of float: %d byte(s)\n", sizeof(float));
return (0);
}
