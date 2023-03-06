#include "main.h"
/**
 * print_chessboard - print board
 * @a: input array
 * Return: nothing
 */
void print_chessboard(char (*a)[8])
{
	int x = 0, y = 0;

	while (x < 8)
	{
		while (y < 8)
		{
			_putchar(a[x][y]);
			y++;
		}
		_putchar('\n');
		x++;
	}
}
