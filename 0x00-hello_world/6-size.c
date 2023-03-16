#include <stdio.h>

/**
 * main-betty doc
 *
 * Return: zero on success
 */

int main(void)
{
char c;
int x;
long int a;
long long int b;
float f;

printf("Size of a char: %lu byte(S)\n", (unsigned long)sizeof(c));
printf("Size of an int: %lu byte(S)\n", (unsigned long)sizeof(x));
printf("Size of a long int:  %lu byte(S)\n", (unsigned long)sizeof(a));
printf("Size of a long long int: %lu byte (S)\n", (unsinged long)sizeof(b));
printf("Size of a float: %lu byte(S)\n", (unsigned long)sizeof(f));
return (0);
}
