// ConsoleApplication2.cpp : 이 파일에는 'main' 함수가 포함됩니다. 거기서 프로그램 실행이 시작되고 종료됩니다.
//

#include <stdio.h>

int main()
{
	int n;

	scanf_s("%d", &n);
	for (int i = 1; i <= n; i++) {
		for (int j = 1; j <= n-i; j++) {
			printf(" ");
		}

		for (int j = 1; j <= 2 * i - 1; j++) {
			printf("*");
		}
			printf("\n");
	}
		
}






