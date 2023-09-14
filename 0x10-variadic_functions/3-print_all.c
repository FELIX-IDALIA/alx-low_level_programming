#include "variadic_functions.h"

/**
 * print_all - function that prints anything
 * @format: is a list of types of arguments passed to the function
 */
void print_all(const char * const format, ...)
{
	int x = 0;
	char *strng, *sp = "";

	va_list lst;

	va_start(lst, format);

	if (format)
	{
		while (format[x])
		{
			switch (format[x])
			{
				case 'c':
					printf("%s%c", sp, va_arg(lst, int));
					break;
				case 'i':
					printf("%s%d", sp, va_arg(lst, int));
					break;
				case 'f':
					printf("%s%f", sp, va_arg(lst, double));
					break;
				case 's':
					strng = va_arg(lst, char *);
					if (!strng)
						strng = "(nil)";
					printf("%s%s", sp, strng);
					break;
				default:
					x++;
					continue;
			}
			sp = ", ";
			x++;
		}
	}

	printf("\n");
	va_end(lst);
}
