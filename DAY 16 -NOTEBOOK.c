#include <stdio.h>

int main() {
    int T, N;

    scanf("%d", &T);

    while (T--) {
        scanf("%d", &N);

        printf("%d\n", N * 10);
    }

    return 0;
}