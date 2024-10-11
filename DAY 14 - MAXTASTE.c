#include <stdio.h>

int main() {
    int T, a, b, c, d;

    scanf("%d", &T);

    while (T--) {
        scanf("%d %d %d %d", &a, &b, &c, &d);

        int max_tastiness = (a > b) ? a : b;
        max_tastiness += (c > d) ? c : d;

        printf("%d\n", max_tastiness);
    }

    return 0;
}