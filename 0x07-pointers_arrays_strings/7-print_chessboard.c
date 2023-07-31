#include "main.h"

/**
 * print_chessboard - a function that  fills memory with a constant byte.
 *
 * @a: pointer to array
 *
 */

void print_chessboard(char (*a)[8])
{
	unsigned int row, col;

	for (row = 0; row < 8; row++)
	{
		for (col = 0; col < 8; col++)
			printf("%c", a[row][col]);
		printf("\n");
	}
}
