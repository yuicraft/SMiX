#include <stdio.h>

int main(void) {
	int x, y, z, max;

	printf("���� �Է� : ");
	scanf("%d%d%d", &x, &y, &z);
	
	max = ((x > y) ? ((x > z) ? x : z) : ((y > z) ? y : z));

	printf("���� ū �� %d", max);

	return 0;
}