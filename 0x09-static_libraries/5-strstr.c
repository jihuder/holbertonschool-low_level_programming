#include "holberton.h"


/**
 * _strstr - locates a substring
 * @haystack: pointer - string to analize
 * @needle: pointer - string to compare
 *
 * Return: pointer to the start of the coincidence
 */



char *_strstr(char *haystack, char *needle)
{
  int x;
  int y = 0;
  int z = 0;

  for (x = 0; haystack[x]; x++)
    {
      for (y = 0; needle[y]; y++)
	{
	  if (haystack[x] == needle[y])
	    {
	      break;
	    }
	}
      for (; x < y; x++)
	{
	  if (haystack[x] == needle[y])
	    {
	      z++;
	      y++;
	    }
	}
      if (y == z)
	{
	  return (haystack + x);
	}
    }
  return ('\0');
}
