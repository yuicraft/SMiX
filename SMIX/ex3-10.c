#include<stdio.h>

int main() {
	int num;

	printf("���� �Է� : ");
	scanf("%d", &num);

	printf("%s", (num % 2) ? "Ȧ��" : "¦��");
	return 0;
}