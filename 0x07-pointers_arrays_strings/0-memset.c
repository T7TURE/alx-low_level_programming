#include "main.h"

/**
 * _memcpy - function that copies memory area
 * @dest: pointer to the memory area where data will be copied
 * @src: pointer to the memory area from which data will be copied
 * @n: number of bytes to be copied
 *
 * Return: dest
 */
char *_memcpy(char *dest, const char *src, size_t n)
{
	char *dst_ptr = dest;
	const char *src_ptr = src;

	while (n--)
		*dst_ptr++ = *src_ptr++;

	{
		return (dest);
	}
}

