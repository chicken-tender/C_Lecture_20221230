#include <stdio.h>
#include <time.h>
#include <stdlib.h>

int main() {
	srand(time(NULL));   // 난수발생용 씨드값을 설정

	// 임의의값을 일정한 범위의 값으로 만들때 사용합니다.
	// 난수(랜덤값)
	int randvalue = rand(); // 랜덤값을 구함.

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