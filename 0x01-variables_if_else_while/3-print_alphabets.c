#include<stdio.h>
/*
 * main - Entry point
 *
 * Discrition- displays both the capital and small letters and finally ends with new line
 *
 * Return - Always 0 (success)
*/

int main(void)
{
	char a = 'a';
	char A = 'A';

	while (a <= 'z')
	{
	printf("%c", a);
	a++;
	}
	while (A <= 'Z')
	{
	printf("%c", A);
	A++;
	}
printf("\n");
return (0);
}
