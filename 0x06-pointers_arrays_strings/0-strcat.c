#include "main.h"

/**
 * _strcat - concatenates the string pointed to by @src.
 * null byte, to the end of the string pointed to by @dest.
 * @dest: A pointer to the string to be concatenated upon.
 * @src: The source string to be appended to @dest.
 *
 * Return: Apointer to the destination string @dest.
 */
char *_strcat(char *dest, char *src)
{
	int i = 0, dest_len = 0;

	while (dest[i++])
		dest_len++:

	for (i = 0; src[i]; i++)
		dest[dest_len++] = src[i];

	return (dest);
}
