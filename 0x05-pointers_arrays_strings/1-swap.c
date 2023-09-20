/**
 * swap_int - the function
 * @a: input
 * @b: input
 * Return: swapped values
 */

void swap_int(int *a, int *b)
{
int temp = *a;
*a = *b;
*b = temp;
}
