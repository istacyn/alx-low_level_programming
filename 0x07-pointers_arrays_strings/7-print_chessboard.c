#include "main.h"
/**
 * print_chessboard - function that prints the chessboard
 * @a: array of chars
 * Return:Always 0
 */
void print_chessboard(char (*a)[8])
{
	int i, j;

	for (i = 0; i <= 7; i++)
	{
		for (j = 0; j <= 7; j++)
		{
			_putchar(a[i][j]);
		}
		_putchar(10);
	}
}
