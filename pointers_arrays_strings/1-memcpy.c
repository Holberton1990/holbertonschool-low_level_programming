#include "main.h"
/**
 * _memset -  function that fills memory with a constant byte
 * @s: memory we will fills
 * @b: constant byte
 * @n: n bytes
 * Return: pointer to the memory area s
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
		dest[i] = src ;
	return (dest);
}


