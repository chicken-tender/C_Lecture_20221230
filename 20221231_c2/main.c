#include <stdio.h>

int main() {
	short a = -32768 ;
	long b = -2147483645;
	int c = 2147483645;

	unsigned short d = 65535;
	unsigned long e = 4294967295;
	unsigned int h = 4294967295;

	float i = 1000.12f;
	double j = 12312.123123;

	char k = 48;
	unsigned char l = 49;

	// 각 데이터 타입의 경계값을 입력하시고 출력해보기.
	// 출력은 printf 함수 사용

	printf("a = %d, b = %d, c = %d\n", a, b, c);
	printf("d = %u, e = %u, h = %u\n", d, e, h);
	printf("i = %f, j = %f\n", i, j);
	printf("k = % c, l = % c\n", k, l);

	return 0;
}