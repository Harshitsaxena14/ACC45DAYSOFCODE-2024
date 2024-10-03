#include <stdio.h>

int main() {
    int T, X, Y;
    scanf("%d", &T);

    while (T--) {
        scanf("%d %d", &X, &Y);

        int pointsA = 500 - 2 * X;
        int pointsB = 1000 - 4 * Y;

        int orderAB = (500 - 2 * X) + (1000 - 4 * (X + Y));
        int orderBA = (1000 - 4 * Y) + (500 - 2 * (X + Y));

        printf("%d\n", (orderAB > orderBA) ? orderAB : orderBA);
    }

    return 0;
}