#include "3-calc.h"
#include <stdlib.h>
#include <stdio.h>
/**
 * op_add - add two integers
 * @a: first number
 * @b: second number
 *
 * Return: sum of a and b
 */

int op_add(int a, int b)
{
	return (a + b);
}

/**
 * op_sub - sub two integers
 * @a: first number
 * @b: second number
 *
 * Return: sub of a from b
 */

int op_sub(int a, int b)
{
	return (a - b);
}

/**
 * op_mul - multiplicate two integers
 * @a: first number
 * @b: second number
 *
 * Return: multiplication of a and b
 */

int op_mul(int a, int b)
{
	return (a * b);
}

/**
 * op_div - divide two integers
 * @a: first number
 * @b: second number
 *
 * Return: division of from and b
 */

int op_div(int a, int b)
{
	if (b == 0)
	{
		printf("Error\n");
		exit(100);
	}
	return (a / b);
}

/**
 * op_mod - module two integers
 * @a: first number
 * @b: second number
 *
 * Return: remaining of a from and b
 */

int op_mod(int a, int b)
{
	if (b == 0)
	{
		printf("Error\n");
		exit(100);
	}
	return (a % b);
}
