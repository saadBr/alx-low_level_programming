#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int main(void)
{
	int myrand , i;

	for (int i =0; i < 10 ; i++)
	{
		myrand = (rand() % 125) + 1;
		printf("%c", myrand);
	}
	return (0);
}
