#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

// ���迬�����ϰ� ��������
// ���迬���ڴ� ������ ������� ����Ÿ Ÿ��? ��Ÿ��
// �������ڴ� �ǿ������� ����Ÿ Ÿ��? ��Ÿ��

int main() {
	int value;

	printf("�������� �Է��ϼ���: ");
	scanf("%d", &value);   // Ű���忡�� �������� �Է¹޾Ƽ� ���� value�� �����մϴ�.
	// scanf�� Ű����� ���� ���� �Է� ������ ����մϴ�.
	// �����Է�: %d
	// �Ǽ��Է�: %f, %lf
	// �����Է�: %c
	// ���ڿ� �Է�: %s


	int ret = value > 0 && value < 10;

	printf("value:%d��(��) 0�� 10���̿� %d\n", value, ret);


	return 0;
}