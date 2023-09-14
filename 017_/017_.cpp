// 017_.cpp : 이 파일에는 'main' 함수가 포함됩니다. 거기서 프로그램 실행이 시작되고 종료됩니다.
//

#include <stdio.h>

int main()
{
    int n;
    for (int i = 2; i <= 9; i++) {
        printf("%d단\n", i);


        for (int j = 1; j <= 9; j++) {
            printf("%d x %d = %d\n", i, j, i * j);
        }

        printf("\n");
    }
}


