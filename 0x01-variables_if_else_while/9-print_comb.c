#include<stdio.h>
/*
 *main- entry point
 *
 *return- always 0
*/
int main(void)
{
	int num = 0;

	while (num <= 9)
	{
	putchar(num + '0');
	if (num != '8')
	{
	putchar(',');
	putchar(' ');
	}
	num++;
	}
putchar('\n');
return (0);
}
