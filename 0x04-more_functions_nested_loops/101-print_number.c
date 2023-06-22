#include "main.h"
/**
 * print_number -  function that prints an integer.
 *
 * @n: is the integer
*/

void print_number(int n)
{
	unsigned int num = n;

	/*first check if is negative*/
	if (n < 0)
	{
		_putchar('-');
		num = -num;
	}

	/*print the first few digits*/
	if ((num / 10) > 0)
		print_number(num / 10);
	/*print the last digits*/
	_putchar((num % 10) + 48);
}
