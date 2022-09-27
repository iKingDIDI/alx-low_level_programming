#include "main.h"

/**
 * print_chessboard - prints the chessboard
 * 
 * @a: 2-dimensional array
 * Return: void
 */
void print_chessboard(char (*a)[8])
{
	int i, j;

	for (i = 0; i < 8; i++)
	{
		_putchar(a[i][j]);
	}
	_putchar('\n');
	}
}
