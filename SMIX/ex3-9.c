#include<stdio.h>

int main() {
	int num;
	
	printf("수를 입력 : ");
	scanf("%d", &num);
	
	printf("%s", (num > 0) ? "양수" : "음수");
	return 0;
}