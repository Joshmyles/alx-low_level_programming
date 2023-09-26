#include "main.h"

/**
 * print_chessboard - the function
 * @a: the array list
 * Return: nothing
 */

void print_chessboard(char (*a)[8])
{
for (int row = 0; row < 8; row++)
{
for (int col = 0; col < 8; col++)
{
_putchar(a[row][col]);
if (col < 7)
{
_putchar(' ');
}
}
_putchar('\n');
}
}
