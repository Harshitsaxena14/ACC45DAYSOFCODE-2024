#include <stdio.h>

int main() {
    int T, N, X;

    // Read the number of test cases
    scanf("%d", &T);

    while (T--) {
        // Read the number of cards and the number of face-up cards
        scanf("%d %d", &N, &X);

        // Calculate the minimum number of operations
        int operations = (X > N / 2) ? N - X : X;

        printf("%d\n", operations);
    }

    return 0;
}