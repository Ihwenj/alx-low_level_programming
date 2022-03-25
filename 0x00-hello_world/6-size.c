#include <stdio.h>
/**
 *main -entry point
 *print function for all the size of typs in the system
 *
 * Return: 0 when sucessful
 */
int main(void)
{
printf("the size of char is: %d byte(s)\n", sizeof(char));
printf("the size of integer is: %d byte(s)\n", sizeof(int));
printf("the size of long integer is: %d byte(s)\n", sizeof(long int));
printf("the size of unsigned long integer is: %d byte(s)\n", sizeof(unsigned long int));
printf("the size of long long integer is: %d byte(s)\n", sizeof(long long int));
printf("the size of unsigned lng long integer is: %d byte(s)\n", sizeof(unsigned long long int));

}
