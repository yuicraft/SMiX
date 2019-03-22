#include <stdio.h>

int main(void) {
	int x, y, z;
	int max;

	scanf("%d%d%d", &x, &y, &z);

	max = ((x > y) ? ((x > z) ? x : z) : ((y > z) ? y : z));
 
	printf("%s", ((x + y + z) > (max * 2)) ? "yes" : "no");


	return 0;
}