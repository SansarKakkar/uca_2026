#include <stdio.h>

int bitAnd(int x, int y) {
    int z = ~x | ~y;
    return ~z;
}

int main() {
    int x, y;

    printf("Enter x and y: ");
    scanf("%d %d", &x, &y);

    int ans = bitAnd(x, y);

    printf("Answer = %d\n", ans);

    return 0;
}
