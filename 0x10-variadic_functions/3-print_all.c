#include "variadic_functions.h"

/**
 * print_all - prints anything
 * @format: a list of types of arguments passed to the function
 * Return: void
 */

void print_all(const char * const format, ...)
{
	va_list any;
	unsigned int i = 0, j = 0, k = 0;
	char *str;
	const char a_arg[] = "cifs";

	va_start(any, format);
	while (format && format[i])
	{
		while (a_arg[j])
		{
			if (format[i] == a_arg[j] && k)
			{
				printf(", ");
				break;
			} j++;
		}
		switch (format[i])
		{
			case 'c':
				printf("%c", va_arg(any, int)), k = 1;
				break;
			case 'i':
				printf("%d", va_arg(any, int)), k = 1;
				break;
			case 'f':
				printf("%f", va_arg(any, double)), k = 1;
				break;
			case 's':
				str = va_arg(any, char *), k = 1;
				if (!str)
				{
					printf("(nil)");
					break;
				}
				printf("%s", str);
				break;
		} i++;
	}
	printf("\n");
	va_end(any);
}
