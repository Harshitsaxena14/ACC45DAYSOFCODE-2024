#include <stdio.h>

int main() {
    int T;
    scanf("%d", &T);

    while (T--) {
        int X, Y;
        scanf("%d %d", &X, &Y);

        int max_months = (Y - 1) / X;
        printf("%d\n", max_months);
    }

    return 0;
}