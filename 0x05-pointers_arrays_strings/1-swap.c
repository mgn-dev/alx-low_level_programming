/**
* swap_int - swaps the values of two integers.
* @a: argument to swap with b.
* @b: argument to swap with a.
*
*/
void swap_int(int *a, int *b)
{
	int x;

	x = *b;
	*b = *a;
	*a = x;
}
