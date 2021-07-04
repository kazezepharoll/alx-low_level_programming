#include <stdlib.h>
#include <time.h>
#include <stdio.h>
#include <ctype.h>

/**
* main-entry point
*
* Return: Always 0 (success)
*/
int main(void)
{
char chr;

for (chr = 'a' ; chr <= 'z' ; chr++)
{
putchar (chr);
}
for (chr = 'a' ; chr <= 'z' ; chr++)
{
putchar(toupper(chr));
}

putchar ('\n');
return (0);
}
