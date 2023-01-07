// 숙제
   // 박스(x:0, y:0) ~ (x1: 10, y1:10)
   // 이 박스안에 점(X, Y) 가 있는 지 확인하는 로직을 만드세요....

#include <stdio.h>;
#define _CRT_SECURE_NO_WARNINGS

int main() {
	int valueX;
	int valueY;
	
	printf("정수 X값을 입력하세요: ");
	scanf_s("%d", &valueX);
	printf("정수 Y값을 입력하세요: ");
	scanf_s("%d", &valueY);

	int ret = valueX > 0 && valueX < 10;
	int fret = valueY > 0 && valueY < 10;
	int ffret = ret && fret;

	printf("X : %d, Y : %d\n", valueX, valueY);
	printf("점(X,Y)가 박스 안에 있는지? %d\n", ffret);

	return 0;
}