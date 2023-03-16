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

printf("Size of a char: %d byte(s)\n", (unsigned long)sizeof(c));
printf("Size of an int: %d lu byte(s)\n", (unsigned long)sizeof(x));
printf("Size of a long int:  %d byte(s)\n", (unsigned long)sizeof(a));
printf("Size of a long long int: %ld byte(s)\n", (unsinged long)sizeof(b));
printf("Size of a float: %d byte(s)\n", (unsigned long)sizeof(f));
return (0);

}
