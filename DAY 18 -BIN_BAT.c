#include <stdio.h>

int main() {
    int T, N, A, B;

    // Read the number of test cases
    scanf("%d", &T);

    while (T--) {
        // Read the input values for each test case
        scanf("%d %d %d", &N, &A, &B);

        // Calculate the number of rounds
        int rounds = 0;
        while (N > 1) {
            N /= 2;
            rounds++;
        }

        // Calculate the total time
        int totalTime = rounds * A + (rounds - 1) * B;

        // Print the result
        printf("%d\n", totalTime);
    }

    return 0;
}
