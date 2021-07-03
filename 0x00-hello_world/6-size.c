#include<stdio.h>

/**
* main - use printf sizeof
*
* Description: output with printf and use sizeof
*
* Return: 0
*/
int main(void)
{
char r;
int a;
long b;
long long c;
float e;
printf("Size of char: %d bytes(s) \n", sizeof(r));
printf("Size of int: %d bytes(s) \n", sizeof(a));
printf("Size of long int: %d bytes(s)\n", sizeof(b));
printf("Size of long long int: %d bytes(s)\n", sizeof(c));
printf("Size of float: %d bytes(s)\n", sizeof(e));
return (0);
}
