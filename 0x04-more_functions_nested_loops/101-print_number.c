#include "main.h"



/**

 * print_number - prints a number using _putchar

 * @n: number to print

 *

 * Return: void

 */

void print_number(int n)

{

	unsigned int un = 0;



	if (n < 0)

	{

		if (n < 1000000000)

			n = -n;

		un = n;

		_putchar(45);

		num_to_char(n);

	}

	else

	{

		un = n;

		num_to_char(un);

	}

}



/**

 * num_to_char - transforms a number wit
