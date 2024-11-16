#include <stdio.h>

int main() {
    int T; // Number of test cases
    scanf("%d", &T);

    while (T--) {
        int N, A, B;
        scanf("%d %d %d", &N, &A, &B);

        int total_duration = 0;

        // Calculate the total duration
        if (N % 2 == 0) {
            total_duration = (N / 2) * (A + B); // Even number of episodes
        } else {
            total_duration = (N / 2) * (A + B) + B; // Odd number of episodes
        }

        printf("%d\n", total_duration);
    }

    return 0;
}
