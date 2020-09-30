#include	<stdio.h>

int	main(void)
{
	char letter = 'A';
	double decimal = 5.489;
	int number = 100;

	printf("%c - Одиночный символ.\n", letter);
	printf("decimal = %g, number = %d\n", decimal, number);
	printf("%05.2g - decimal\n", decimal);
	return (0);
}