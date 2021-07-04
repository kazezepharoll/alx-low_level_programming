#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main-entry point
 * Description: print lowercase letters using putchar
 * Return: Always 0 (success)
 */
int main(void)
{
char chr;

for (chr = 'a' ; chr <= 'z' ; chr++)
{
if (chr != 'q' && chr != 'e')
putchar (chr);
}
putchar ('\n');

return (0);
}
