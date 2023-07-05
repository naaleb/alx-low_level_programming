#include "main.h"
#include <stdio.h>
/**
 * _sqrt_recursion - Returns the natural square root of a number.
 * @n: Number to find the square root of.
 *
 * Return: The natural square root of the number, or -1 if it doesn't.
 */
int helper_sqrt(int n, int start, int end);


int _sqrt_recursion(int n)
{
	if  (n < 0)
	{
		return (-1);
	}
	if (n == 0 || n == 1)
	{
		return (n);
	}
	return (helper_sqrt(n, 1, n));
}
/**
 * helper_sqrt - Recursive helper function to find the square root.
 *
 * @n: The number to find the square root
 * @start: The starting point of the range
 * @end: The ending point of the range
 *
 * Return: Square root of a number within a range, or -1 if not found.
 */

int helper_sqrt(int n, int start, int end)
{
	int mid = (start + end) / 2;

	if (start <= end)
	{
		if (mid * mid == n)
		{
			return (mid);
		}
		if (mid * mid < n)
		{
			return (helper_sqrt(n, mid + 1, end));
		}
		return (helper_sqrt(n, start, mid - 1));
	}
	return (-1);
}
