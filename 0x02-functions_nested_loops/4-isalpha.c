#include "main.h"
/**
  *_islower - show 1 if input is a letter, show 0 if otherwise
  *
  *@c: character to check
  *
  *Return: show 1 for letter, 0 for the rest.
  */
int _isalpha(int c)
{
	if ((c >= 'A' && c <= 'Z') || (c >= 'a' && c <= 'z'))
	{
		return (1);
	}
	else
	{
		return (0);
	}
	_putchar('\n');
}
































