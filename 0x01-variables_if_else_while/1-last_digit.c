#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/* more headers goes there */

/* betty style doc for function main goes there */
int main(void)
{
	int n;
	int last;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	/* your code goes there */
	last = n % 10;
	if (last > 5)
	{
	printf("last digit of %d and is greater than 5", last);
	}
	else if (last == 0)
	{
	printf("last digit of %d and is 0", last);
	}
	else if (last < 6 && last != 0)
	{
	printf("last digit of %d and is less than 6 and not 0", last);
	}
	return (0);
}