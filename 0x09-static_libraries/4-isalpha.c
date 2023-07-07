#include "main.h"
/**
  *_isalpha - checks if a character is an alphabetic letter
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
