#include <stdio.h>

int main() {
    int input;

    printf("수를 입력: ");
    scanf("%d", &input);

    printf("10 곱한 수: %d\n", input * 10);
    printf("10 나눈 수: %d\n", input / 10);

    return 0;
}
