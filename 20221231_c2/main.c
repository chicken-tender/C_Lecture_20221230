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

	// �� ������ Ÿ���� ��谪�� �Է��Ͻð� ����غ���.
	// ����� printf �Լ� ���

	printf("a = %d, b = %d, c = %d\n", a, b, c);
	printf("d = %u, e = %u, h = %u\n", d, e, h);
	printf("i = %f, j = %f\n", i, j);
	printf("k = % c, l = % c\n", k, l);

	return 0;
}