#ifndef _HEADER_
#define _HEADER_
#include <stdarg.h>

int _putchar(char c);
int sum_them_all(const unsigned int n, ...);
void print_numbers(const char *separator, const unsigned int n, ...);
void print_strings(const char *separator, const unsigned int n, ...);
void print_all(const char * const format, ...);
void print_char(char *separator, va_list params);
void print_int(char *separator, va_list params);
void print_float(char *separator, va_list params);
void print_string(char *separator, va_list params);

/**
 * struct format_types - struct format
 * @id: conversion specifier
 * @f: func pointer
 */
typedef struct format_types
{
	char *id;
	void (*f)(char *separator, va_list params);
} ft;
#endif
