#include<stdio.h>
/*
 * main - Entry point
 *
 * Return - Always 0 (success)
*/

int main(void)
{
	char a = 'a';
	char A = 'A';

	while ( a <= 'z' )
	{
	printf("%c", a);
	a++;
	}
	while ( A <= 'Z' )
	{
	printf("%c", A);
	A++;
	}
printf("\n");
return (0);
}
