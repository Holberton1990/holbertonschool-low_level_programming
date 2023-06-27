#include "main.h"
#include <stdio.h>
/**
 * _strcat - main function
 * @dest: param
 * @src: param
 * Return: dest
 */
char *_strcat(char *dest, char *src)
{
	int i = 0;
	int j = 0;

	while (dest[i] != '\0')
		i++;

	while (j = 0; src[j] != '\0'; j++)
	{
		dest[i] = src[j];
	        i++;
		j++;
        }
	dest[i] = '\0';
	return (dest);


}

