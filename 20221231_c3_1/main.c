#include <stdio.h>

int main() {
	// ��������
	// && (��And), ||(�� OR), ! (�� not)
	// ���������� �ǿ����� ����Ÿ Ÿ���� ? ��Ÿ��
	// C���� ��Ÿ���� �����ϴ�.
	// �������� ������ ��Ÿ���� ó���մϴ�.
	// 0�� ����, 0�̿� ���� ��.

	// && (�� And)
	// true && true = true;
	// false && true = false;
	// true && false = false;
	// false && false = false;

	// || (�� OR)
	// true || true = true;
	// true || false = true;
	// false || true = true;
	// false || false = false;

	// !(�� not)
	// !true = false;
	// !false = true;

	int TRUE = 1;
	int FALSE = 0;

	int ret = TRUE && TRUE;
	printf("TRUE && TRUE = %d\n", ret);

	ret = TRUE && FALSE;
	printf("TRUE && FALSE = %d\n", ret);

	ret = FALSE && TRUE;
	printf("FALSE && TRUE = %d\n", ret);

	ret = FALSE && FALSE;
	printf("FALSE && FALSE = %d\n", ret);


	ret = TRUE || TRUE;
	printf("TRUE || TRUE = %d\n", ret);

	ret = TRUE || FALSE;
	printf("TRUE || FALSE = %d\n", ret);

	ret = FALSE || TRUE;
	printf("FALSE && TRUE = %d\n", ret);

	ret = FALSE || FALSE;
	printf("FALSE && FALSE = %d\n", ret);


	ret = !TRUE;
	printf("!TRUE = %d\n", ret);

	ret = !FALSE;
	printf("!FALSE = %d\n", ret);


	return 0;
}