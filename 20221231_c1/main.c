#include <stdio.h> //�⺻ �Լ��� ����ϱ� ���� stdio.h ��������� ����

// �� �� �ּ�

/*

������ �ּ��� �� �� ���

*/

int main() { //�����Լ� (�����Լ����� ���� ���α׷��� ����)
	// �������� ��� ��Ģ
	// ����ҹ���, ����(ù ���ڷ� ��� �� ��), _
	// �������� ���̴� ǥ�� C������ 31���ڱ��� ����
	// �������� ���� ���� ������ ���� ���� �ǹ̸� �����ϴ� �ܾ ������ ����.

	// printf �Լ��� ���� ���� ���ڿ��� ����
	short a = 20;
	float b = 1.2f; // float�� ���� �ڿ� ���ͷ� f�� ���δ�.

	printf("a = %d, b = %f\n", a, b);
	// short, long, int : %d
	// unsigned short, unsigned int : %u
	// unsigned long : %lu
	// unsigned long long int : %llu
	// float, double : %f
	// long double : %lf
	// char, unsigned char : %c
	// ���ڿ��� ��� : %s

	return 0;
}