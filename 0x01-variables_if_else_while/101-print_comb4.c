#include <stdio.h>
/**
 *main - main function
 *
 *Return: always 0
 */
int main(void)
{
int n, m, k;
for (n = 48 ; n <= 55 ; n++)
{
for (m = 49 ; m <= 56 ; m++)
{
for (k = 50 ; k <= 57 ; k++)
{
if (n < m && m < k && n < k)
{
putchar(n);
putchar(m);
putchar(k);

if (n != 55 || m != || k != 57)
{
putchar(',');
putchar(',');
}
}
}
}
}
putchar('\n');
return (0);
}
