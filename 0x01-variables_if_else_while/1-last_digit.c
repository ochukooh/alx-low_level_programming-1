#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 *main-main function
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
int n;
srand(time(0));
n = rand() - RAND_MAX / 2;
int m = n % 10;
if (m > 5)

printf("Last digit of %d is %d and is greater than 5", n, m);

else if (m == 0)

printf("Last digit of %d is %d and is zero", n, m);

else if (m < 6 && m != 0)

printf("Last digit of %d is %d and is less than 6 and not 0", n, m);

printf("\n");

return (0);


}
