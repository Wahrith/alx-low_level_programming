#include "main.h"

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	int i = 0;
	char name_of_school[] = "main";

	while (i < 8)
	{
		_putchar(name_of_school[i]);
		i++;
	}
	_putchar('\n');
	return (0);
}
