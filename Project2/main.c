#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

// 관계연산자하고 논리연산자
// 관계연산자는 연산의 결과값의 데이타 타입? 논리타입
// 논리연산자는 피연산자의 데이타 타입? 논리타입

int main() {
	int value;

	printf("정수값을 입력하세요: ");
	scanf("%d", &value);   // 키보드에서 정수값을 입력받아서 변수 value에 저장합니다.
	// scanf는 키보드로 부터 값을 입력 받을때 사용합니다.
	// 정수입력: %d
	// 실수입력: %f, %lf
	// 문자입력: %c
	// 문자열 입력: %s


	int ret = value > 0 && value < 10;

	printf("value:%d이(가) 0과 10사이에 %d\n", value, ret);


	return 0;
}