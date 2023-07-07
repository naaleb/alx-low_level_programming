#include "main.h"
/**
  *_isupper - this checks if @c is Uppercase letter.
  *@c: Char to check
  *Return: returns 1 if uppercase, otherwise return 0
  */
int _isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
		return (1);
	return (0);
}
