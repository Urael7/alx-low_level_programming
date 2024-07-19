#include<stdio.h>

/*
 *main-entry point
 *Return-Always 0 success
 */

int main(void)
{
	int a = 'z';

	while (a >= 'a')
	{
		putchar(a);
		a--;
	}
putchar('\n');
return (0);
}
