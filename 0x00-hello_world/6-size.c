#include <stdio.h>
/**
 * main -entry point
 *
 * Return: 0 when successful
 */
int main(void)
{
printf("the size of char is : %d byte(s)\n", sizeof(char));
printf("the size of integer is : %d \n", sizeof(int));
printf("the size of double is : %d \n", sizeof(double));
printf("the size of float is : %d \n", sizeof(float));
printf("the size of long int is: %d\n", sizeof(long int));
printf("size of long long int is: %d\n", sizeof(long long int));
return (0);
}
