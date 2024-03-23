#include <stdio.h>

int main() { 
    int max = 0;
    int num[9][9];
    int row, col;
    int i= 0;
    int j =0;
    
// 배열에 입력을 받음
for (i = 0; i < 9; i++) {
    for (j = 0; j < 9; j++) {
        scanf("%d", &num[i][j]); // 입력을 num 배열에 저장
        if (num[i][j] >= max) { // 최댓값이 변경될 때만 업데이트
            max = num[i][j];
            row = i; // 행 인덱스 업데이트
            col = j; // 열 인덱스 업데이트
        }
    }
}

printf("%d\n", max);
printf("%d %d", row + 1, col + 1); // 인덱스는 1부터 시작하므로 +1

return 0;
}