#include <stdio.h>
#include "main.h"

/**
*print_to_98 - n to 98
*@n: start point
*Return: 0
*/
void print_to_98(int n)
{
	if (n <= 98)
	{
		for (; n <= 98; n++)
		{
			printf("%d", n);

			if (n == 98)
				continue;
			printf(", ");
		}
		printf("\n");
	}
	else
	{
		for (; n >= 98; n--)
		{
			printf("%d", n);
			if (n == 98)
				continue;
			printf(", ");
		}
		printf("\n");
	}
}
