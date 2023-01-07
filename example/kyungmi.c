#include <stdio.h>

int main() {
	short a = 10;
	short b = 20;

	int ret = a / b;
	printf("%d / %d = %d\n", a, b, ret);

	float fret = a / b;
	printf("%d / %d = %f\n", a, b, fret);

	fret = a / (float)b;
	printf("%d / %d = %f\n", a, b, fret);


	return 0;
}

