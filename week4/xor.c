#include <stdio.h>

int XOR(int x, int y) {
    int a = x & ~y;
    int b = ~x & y;

    return ~(~a & ~b);
}

int main() {
    int ans = XOR(4, 5);
    printf("%d\n", ans);

    return 0;
}
