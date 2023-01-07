#include <stdio.h> //기본 함수를 사용하기 위해 stdio.h 헤더파일을 포함

// 한 줄 주석

/*

블럭으로 주석을 쓸 때 사용

*/

int main() { //메인함수 (메인함수에서 부터 프로그램이 시작)
	// 변수명의 명명 규칙
	// 영대소문자, 숫자(첫 글자로 사용 안 됨), _
	// 변수명의 길이는 표준 C에서는 31문자까지 가능
	// 변수명을 만들 때는 변수에 담기는 값의 의미를 내포하는 단어나 문장이 좋음.

	// printf 함수는 형식 지정 문자열을 지원
	short a = 20;
	float b = 1.2f; // float는 숫자 뒤에 리터럴 f를 붙인다.

	printf("a = %d, b = %f\n", a, b);
	// short, long, int : %d
	// unsigned short, unsigned int : %u
	// unsigned long : %lu
	// unsigned long long int : %llu
	// float, double : %f
	// long double : %lf
	// char, unsigned char : %c
	// 문자열을 출력 : %s

	return 0;
}