#include<stdio.h>

int main() {
	int num;

	printf("¼ö¸¦ ÀÔ·Â : ");
	scanf("%d", &num);

	printf("%s", (num % 2) ? "È¦¼ö" : "Â¦¼ö");
	return 0;
}