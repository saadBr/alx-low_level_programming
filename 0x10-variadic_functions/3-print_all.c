#include "variadic_functions.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * print_all - printing anything
 * @format: conversion specifier
 *
 * Return: Nothing
 */

void print_all(const char * const format, ...)
{
	va_list params;
	ft ft[] = {
		{ "c", print_char },
		{ "i", print_int },
		{ "f", print_float },
		{ "s", print_string }
	};

	unsigned int i = 0;
	unsigned int j = 0;
	char *separator = "";

	va_start(params, format);

	while (format != NULL && format[i])
	{
		j = 0;
		while (j < 4)
		{
			if (format[i] == *ft[j].id)
			{
				ft[j].f(separator, params);
				separator = ", ";
			}
			j++;
		}
		i++;
	}

	va_end(params);
	printf("\n");

}

/**
 * print_char - printing a single char
 * @separator: string to be printed between the strings
 * @params: list of params
 *
 * Return: Nothing
 */
void print_char(char *separator, va_list params)
{
	printf("%s%c", separator, va_arg(params, int));
}

/**
 * print_int - printing an integer
 * @separator: string to be printed between the strings
 * @params: list of params
 *
 * Return: Nothing
 */
void print_int(char *separator, va_list params)
{
	printf("%s%i", separator, va_arg(params, int));
}

/**
 * print_float - printing a a float
 * @separator: string to be printed between the strings
 * @params: list of params
 *
 * Return: Nothing
 */
void print_float(char *separator, va_list params)
{
	printf("%s%f", separator, va_arg(params, double));
}
/**
 * print_string - printing a string
 * @separator: string to be printed between the strings
 * @params: list of params
 *
 * Return: Nothing
 */
void print_string(char *separator, va_list params)
{
	char *string = va_arg(params, char *);

	if (string != NULL)
	{
		printf("%s%s", separator, string);
		return;
	}
	printf("%s%s", separator, "(nil)");
}
