#include <stdio.h>

int add(int a, int b);

int main()
{
	printf("Result: %d", add(100, 100));
	return 0;
}

int add(int a, int b)
{
	int add;

	add = a + b;

	return add;
}
