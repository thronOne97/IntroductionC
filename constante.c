#include <stdio.h>

#define PIZZACOST 1.5

const char NEWLINE = '\n';

int main()
{
	float costoPizza;
	float numberOfSlices = 3;
	costoPizza = PIZZACOST * numberOfSlices;
	printf("Total: %c %f", NEWLINE,costoPizza);

}
