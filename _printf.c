#include "holberton.h"
#include <stddef.h>

/**
 * _printf - Receives the main string and all the necessary parameters to
 * print a formated string
 * @format: A string containing all the desired characters
 * Return: A total count of the characters printed
 */
int _printf(const char *format, ...)
{
int printed_chars;

conver_t f_list[] = {
{"c", print_c},
{"s", print_s},
{"%", print_p},
{"d", print_d},
{"i", print_i},
{"b", print_b},
{"r", print_r},
{"R", rot13},
{"u", unsigned_integer},
{"o", print_o},
{"x", print_x},
{"X", print_X},
{NULL, NULL}
};
va_list arg_list;

if (format == NULL)
return (-1);

va_start(arg_list, format);
printed_chars = parser(format, f_list, arg_list);
va_end(arg_list);
return (printed_chars);
}

