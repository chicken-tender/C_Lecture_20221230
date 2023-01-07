#include <stdio.h>

int main() {
	// 논리연산자
	// && (논리And), ||(논리 OR), ! (논리 not)
	// 논리연산자의 피연산자 데이타 타입은 ? 논리타입
	// C언어에는 논리타입이 없습니다.
	// 정수값을 가지고 논리타입을 처리합니다.
	// 0은 거짓, 0이외 숫자 참.

	// && (논리 And)
	// true && true = true;
	// false && true = false;
	// true && false = false;
	// false && false = false;

	// || (논리 OR)
	// true || true = true;
	// true || false = true;
	// false || true = true;
	// false || false = false;

	// !(논리 not)
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