#include "main.h"

/**
 * _islower - check main
 * @c: input character
 * Return: 1 if is lowercase, otherwise return 0
 */

int _islower(int c)
{
	char i;
	int lower = 0;

	for (i = 'a'; i <= 'z'; i++)
	{
		if (i == c)
			lower = 1;
	}

	return (lower);
}
