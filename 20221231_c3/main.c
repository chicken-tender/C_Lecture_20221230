#include <stdio.h>

int main() {
    int a = 20;

    a = -a;

    printf("a = %d\n", a);

    // ���迬����
    // <, >, <=, >= , ==, != 

    int left = 20;
    int right = 30;

    int ret = left < right;   // ���迬������ ������ ������� ����Ÿ Ÿ���� ?
    // true, false ����..
    // C���� �� Ÿ���� �����ϴ�.
    // �������� ������ ��Ÿ���� ����մϴ�.
    // 0�� ����, 0�̿��� ���ڴ� �� ���� �޾Ƶ帳�ϴ�.
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