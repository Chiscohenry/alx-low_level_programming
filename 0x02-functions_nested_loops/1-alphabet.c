#include "main.h"
/**
 * print_alphabet - Entry point
 *
 *  Return:0
 */
void print_alphabet(void)
{
	char c;
	int i = 0;
	
	while (i < 10)
	{
		c = 'a';
		while (c <= 'z')
		{
			_putvhar (c);
			c++;
		}
		_putchar('\n')
			i++;
	}
}
