#include <stdio.h>

int main() {
    int T, N, K, M;

    scanf("%d", &T);

    while (T--) {
        scanf("%d %d %d", &N, &K, &M);

        int total_capacity = K * M;
        int min_bags = (N + total_capacity - 1) / total_capacity;

        printf("%d\n", min_bags);
    }

    return 0;
}