#include <stdio.h>
int logicalShift(int x, int n) {
	int mask = ~(((1 << 31) >> n) << 1);
    	return (x >> n) & mask;
}

int main() {
    	int x, n;
    	printf("Enter x: ");
   	scanf("%x", &x);
    	printf("Enter n: ");
    	scanf("%d", &n);
    	printf("Result = 0x%08X\n", logicalShift(x, n));
    	return 0;
}
