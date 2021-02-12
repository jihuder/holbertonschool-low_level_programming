#include <stdio.h>
/**
 * _isupper - prints the string "Holberton" from a character array.
 * @c: this is the variable
 * Return: 0 on success.
 */

int _isupper(int c)
{

	if (c >= 65)
	{
		if (c < 97)
		{
			return (1);
		}
		else
		{
			return (0);
		}
	}
	return (0);
}
