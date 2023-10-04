/*
 * file 3-mul.c
 * Author :Martin Mativo
 *
 */

#include <stdio.h>
#include <stdlib.h>
/**
 * main - Prints all arguments it receives.
 * @argc: The number of arguments supplied to the program.
 * @argv: An array of pointers to the arguments.
 *
 * Return: Always 0.
 */
int main(int argc, char *argv[])
{	
	int num1;
	int num2;
	int prod;

	if (argc != 3)
	{
		printf("error!");

		return (1);

	}

	num1=atoi(argv[1]);
	num2=atoi(argv[2]);
	prod= num1 * num2;
	
	printf("%d\n",prod);

	return (0);
}
