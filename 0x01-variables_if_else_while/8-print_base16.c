#include <stdio.h>
/*
 * Return - Always 0 success
 *main - Entry point
 */
int main(void)
{
	int num = 0;
	char letter = 'a';

	while (num < 10)
	{
		putchar(num+'0');
		num++;
	}
	while (letter < 'g')
	{
		putchar(letter);
		letter++;
	}
	putchar('\n');
	return (0);
}

