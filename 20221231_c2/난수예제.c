#include <stdio.h>
#include <time.h>
#include <stdlib.h>

int main() {
	srand(time(NULL));   // �����߻��� ���尪�� ����

	// �����ǰ��� ������ ������ ������ ���鶧 ����մϴ�.
	// ����(������)
	int randvalue = rand(); // �������� ����.

	int direction = randvalue % 4;

	// North: 0, South: 1, West: 2, East 3
	printf("randvalue = %d, direction = %d\n", randvalue, direction);


	randvalue = rand();
	direction = randvalue % 4;
	printf("randvalue = %d, direction = %d\n", randvalue, direction);

	randvalue = rand();
	direction = randvalue % 4;
	printf("randvalue = %d, direction = %d\n", randvalue, direction);

	randvalue = rand();
	direction = randvalue % 4;
	printf("randvalue = %d, direction = %d\n", randvalue, direction);


	return 0;
}