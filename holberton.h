#ifndef _HOLBERTON_H_
#define _HOLBERTON_H_

#include <stdarg.h>
#include <stdlib.h>
#include <unistd.h>
/**
* struct convert - defines a structure for symbols and funcions
* @sym: The operator
* @f: function associated
*/
struct convert
{
char *sym;
int (*f)(va_list);
};
typedef struct convert conver_t;

int _putchar(char c);
int _printf(const char *format, ...);
int _write_char(char);
int print_c(va_list c);
int print_s(va_list c);
int print_i(va_list i);
int print_d(va_list d);
int print_u(va_list u);
int print_b(va_list b);
int print_o(va_list o);
int rot13(va_list);
int unsigned_integer(va_list);
int print_r(va_list r);
int print_x(va_list x);
int print_X(va_list X);
int print_p(va_list p);
int parser(const char *format, conver_t flist, va_list arg_list);

#endif
