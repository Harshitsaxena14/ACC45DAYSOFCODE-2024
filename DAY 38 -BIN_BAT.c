#include <stdio.h>
#include <math.h>

int main() {
    int T; // Number of test cases
    scanf("%d", &T);

    while (T--) {
        int N, A, B; // Number of teams, duration of each round, length of breaks
        scanf("%d %d %d", &N, &A, &B);

        // Calculate the number of rounds
        int rounds = log2(N);

        // Calculate the total time
        int total_time = (rounds * A) + ((rounds - 1) * B);

        // Output the result
        printf("%d\n", total_time);
    }

    return 0;
}