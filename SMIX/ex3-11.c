#include <stdio.h>

int main(void) {
	int x, y, z, max;

	printf("수를 입력 : ");
	scanf("%d%d%d", &x, &y, &z);
	
	max = ((x > y) ? ((x > z) ? x : z) : ((y > z) ? y : z));

	printf("가장 큰 수 %d", max);

	return 0;
}