#include "main.h"

/**
  * _strlen - Returns the length of a string
  * @s: String to count
  *
  * Return: String length
  */

int _strlen(char *s)
{
	int length = 0;

	for (; *s != '\0'; s++)
		length++;
	return (length);
}
