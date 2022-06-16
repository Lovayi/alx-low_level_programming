#include "main.h"

/**
 * *_strcat - concatenates two strings
 * Description - a function that concatenates two strings
 * @dest: pointer destination that will be changed
 * @src: pointer source that wil be changed
 * Return: dest
*/

char *_strcat(char *dest, char *src)
{
	int a = 0;
	int b = 0;

	while (dest[a] != '\0')
	{
		a++;
	}

	while (src[b] != '\0')
	{
		dest[a] = src[b];
		a++;
		b++;
	}
	dest[a] = '\0';

	return (dest);
}

