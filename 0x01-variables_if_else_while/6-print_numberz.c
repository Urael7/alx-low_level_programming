#include<stdio.h>

/*
 *main - Entry point
 *Return - Always 0 (success)
 */
/*the code prints the number from 0 upto 9*/

int main(void)
{
	int num = 0;

	while (num < 10)
	{
		putchar(num + '0');
		num++;
	}
putchar('\n');
return (0);
}
