/**
* _sqrt_recursion -
* @n:
*
* Return:
*/
int _sqrt_recursion(int n)
{
	if (n < 0)
    {
        return (-1);
    }
    else if (n == 0)
    {
        return (0);
    }
    else
    {
        int guess = x / 2;
        int precision = 1;

        return _sqrt_rec_helper(x, guess, precision);
    }
}

int _sqrt_rec_helper(int x, int guess, int precision)
{
    int new_guess = (guess + x / guess) / 2;

    if (guess - new_guess <= precision)
    {
        return (new_guess);
    }
    else
    {
        return (_sqrt_rec_helper(x, new_guess, precision));
    }
}
