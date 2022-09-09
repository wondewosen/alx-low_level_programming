#include <stdio.h>

/**
* main - entry point
*
* codes for prting all possible combination of d/t digits
* in assending order and separeted by comma followed by space
*
* Return: 0
*/
int main(void)
{
int digit1, digit2;

for (digit1 = 0; digit1 < 9; digit1++)
{
for (digit2 = digit1 + 1; digit2 < 10; digit2++)
{
putchar ((digit1 % 10) + '0');
putchar ((digit2 % 10) + '0');

if (digit1 == 8 && digit2 == 9)
continue;

putchar (',');
putchar (' ');
}
}
putchar ('\n');
}
