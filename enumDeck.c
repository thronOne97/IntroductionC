#include <stdio.h>

enum deck
{
	club = 0,
	diamonds = 5,
	hearts = 10,
	spades = 15,
} card;

int main()
{
	card = spades;
	printf("Card Power %d", card);
	printf("\n Size of var %zu", sizeof(card));
	return 0;
}
