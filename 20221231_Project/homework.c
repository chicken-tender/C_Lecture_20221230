// ����
   // �ڽ�(x:0, y:0) ~ (x1: 10, y1:10)
   // �� �ڽ��ȿ� ��(X, Y) �� �ִ� �� Ȯ���ϴ� ������ ���弼��....

#include <stdio.h>;
#define _CRT_SECURE_NO_WARNINGS

int main() {
	int valueX;
	int valueY;
	
	printf("���� X���� �Է��ϼ���: ");
	scanf_s("%d", &valueX);
	printf("���� Y���� �Է��ϼ���: ");
	scanf_s("%d", &valueY);

	int ret = valueX > 0 && valueX < 10;
	int fret = valueY > 0 && valueY < 10;
	int ffret = ret && fret;

	printf("X : %d, Y : %d\n", valueX, valueY);
	printf("��(X,Y)�� �ڽ� �ȿ� �ִ���? %d\n", ffret);

	return 0;
}