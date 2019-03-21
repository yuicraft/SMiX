#include<stdio.h>

int main() {
	int num;
	
	printf("수를 입력 : ");
	scanf("%d", &num);
	
	(num > 0) ? printf("양수") : printf("음수");
	
	return 0;
}