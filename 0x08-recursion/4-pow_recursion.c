/**
 * _pow_recursion - returns value of
 * x raised to power y
 *
 * @x: base number
 * @y: exponent number
 *
 * Return: exponential value on success
 * -1 on negative exponent values
 */
int _pow_recursion(int x, int y)
{
	if (y == 0)
	{
		return (1);
	}
	else if (y < 0)
	{
		return (-1);
	}
	else
	{
		return (x * _pow_recursion(x, (y - 1)));
	}
}

