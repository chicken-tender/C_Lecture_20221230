#include <stdio.h>

int main() {
	int a;
	int b;

	a = 1;
	b = 2;

	int ret = a / b;
	printf("%d / %d = %d\n", a, b, ret);

	float fret = a / b;
	printf("%d / %d = %f\n", a, b, fret);

	fret = a / (float)b;   // (float) 형변환 연산자
	printf("%d / %d = %f\n", a, b, fret);

	return 0;
}