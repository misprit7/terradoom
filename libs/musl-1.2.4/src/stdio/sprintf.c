/*
 * NOT PART OF ORIGINAL MUSL
 */


#include <stdio.h>
#include <stdarg.h>

int sprintf(char *restrict s, const char *restrict fmt, ...)
{
	int ret;
	va_list ap;
	va_start(ap, fmt);
	ret = vsnprintf(s, 10000, fmt, ap);
	va_end(ap);
	return ret;
}
