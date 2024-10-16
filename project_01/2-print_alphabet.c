#include <stdio.h>
#include "main.h"
/**
 *main - Entry point of the program
 *Description: Prints 10 times the alphabet in lowercase
 *Return: Always 0 (Success)
 */
void print_alphabet_x10(void)
{
	int i;

	for (i = 0; i <= 9; i++)
	{
		int a;

		for (a = 'a'; a <= 'z'; a++)
		{
			putchar(a);
		}
		putchar('\n');
	}
	return (0);
}
