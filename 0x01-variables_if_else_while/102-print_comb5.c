#include <stdio.h>
#include <stdlib.h>
/**
* main - entry point
*
* codes print two combination digit
* Return: 0 Success
*/
int main(void)
{
int n1 = 0, n2;
while (n1 <= 99)
{
n2 = n1;
while (n2 <= 99)
{
if (n2 != n1)
{
putchar((n1 / 10) + 48);
putchar((n1 % 10) + 48);
putchar(' ');
putchar((n2 / 10) + 48);
putchar((n2 % 10) + 48);
if (n1 != 98 || n2 != 99)
putchar(',');
putchar(' ');
}
}
++n2;
}
++n1;
}
putchar('\n');
return (0);
}
