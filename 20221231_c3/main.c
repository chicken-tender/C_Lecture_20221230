#include <stdio.h>

int main() {
    int a = 20;

    a = -a;

    printf("a = %d\n", a);

    // 관계연산자
    // <, >, <=, >= , ==, != 

    int left = 20;
    int right = 30;

    int ret = left < right;   // 관계연산자의 연산의 결과값을 데이타 타입이 ?
    // true, false 논리값..
    // C언어에는 논리 타입이 없습니다.
    // 정수값을 가지고 논리타입을 사용합니다.
    // 0은 거짓, 0이외의 숫자는 참 으로 받아드립니다.
    printf("%d < %d = %d\n", left, right, ret);

    ret = left > right;
    printf("%d > %d = %d\n", left, right, ret);

    ret = left <= right;
    printf("%d <= %d = %d\n", left, right, ret);

    ret = left >= right;
    printf("%d >= %d = %d\n", left, right, ret);

    ret = left == right;
    printf("%d == %d = %d\n", left, right, ret);

    ret = left != right;
    printf("%d != %d = %d\n", left, right, ret);

    return 0;
}