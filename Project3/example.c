#include <stdio.h>;
#include <time.h>;
#include <stdlib.h>;

int main() {
	srand(time(NULL));

	int randvalue = rand();
	int direction = randvalue % 4;

	printf("randvalue : %d, direction : %d\n", randvalue, direction);




	return 0;
}