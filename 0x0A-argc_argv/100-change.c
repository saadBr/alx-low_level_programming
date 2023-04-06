#include <stdio.h>
#include <stdlib.h>
/**
 * main - prints its name followed by a new line
 * @argc: argument count
 * @argv: argument vector
 * Return: 0
 */

int main(int argc, char *argv[])
{
	int coins = 0, change;

	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}
	else if(atoi(argv[1]) < 0)
	{
		printf("0\n");
		return (0);
	}
	else
	{
		change = atoi(argv[1]);
		while (change != 0)
		{
			if (change >= 25)
			{
				coins = coins + (change / 25);
				change = change % 25;
			}
			else if (change >= 10)
			{
				coins = coins + (change / 10);
				change = change % 10;
			}
			else if (change >= 5)
                        {
                                coins = coins + (change / 5);
                                change = change % 5;
                        }
			else if (change >= 2)
                        {
                                coins = coins + (change / 2);
                                change = change % 2;
                        }
			else if (change >= 1)
                        {
                                coins = coins + (change / 1);
                                change = change % 1;
                        }
		}
	}
	printf("%d\n", coins);
	return (0);
}
