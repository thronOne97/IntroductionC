#include <stdio.h>

void demo();

int main()
{
	demo();

	return 0;
}

void demo()
{
	int a, b, sum;
	a = 100;
	b = 100;

	sum = a + b;
	
	printf("Result: %d", sum);
}
