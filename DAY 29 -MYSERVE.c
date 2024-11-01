#include <stdio.h>

int main() {
    int T;
    scanf("%d", &T); // Read number of test cases

    while (T--) {
        int P, Q;
        scanf("%d %d", &P, &Q); // Read scores for Alice and Bob

        int S = P + Q; // Total points played
        int R = S % 4; // Remainder when divided by 4

        // Determine whose serve it is based on the remainder
        if (R == 0 || R == 1) {
            printf("Alice\n");
        } else {
            printf("Bob\n");
        }
    }

    return 0;
}
