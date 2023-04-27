#include "lists.h"

/**
 * main_parent - executing before main
 */

void __attribute__((constructor)) main_parent()
{
	printf("You're beat! and yet, you must allow,\n");
	printf("I bore my house upon my back!\n");
}
