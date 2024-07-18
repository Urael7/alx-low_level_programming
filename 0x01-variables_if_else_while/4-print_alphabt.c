#include<stdio.h>

/*
 * main - Entry point
 *
 * Return - Always 0 (success)
*/
int main(void)
{
	int a = 'a';

	while (a <= 'z')
	{
		if (a == 'e' && a == 'q')
		{	
		a++;
		}
		else 
		{
		putchar(a);
		a++;
		}
	}
putchar('\n');
return (0);
}
