#include <stdio.h>

	int a, b;

void add(int a, int b);

int main()
{
	add(100, 100);

	return 0;
}

void add(int a, int b)
{
	int add;

	add = a+ b;

	printf("Result: %d", add);
}
