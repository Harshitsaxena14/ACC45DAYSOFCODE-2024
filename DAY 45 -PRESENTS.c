#include <stdio.h>

int main() {
    int T; // Number of test cases
    scanf("%d", &T);

    while (T--) {
        long long N;
        scanf("%lld", &N);

        // Calculate the number of coins required
        long long coins = (N / 5) * 4 + (N % 5);

        printf("%lld\n", coins);
    }

    return 0;
}
