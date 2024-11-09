#include <stdio.h>

int main() {
    int T; // Number of test cases
    scanf("%d", &T);

    while (T--) {
        int X, A, B;
        scanf("%d %d %d", &X, &A, &B);

        // Calculate total score
        int totalScore = A * 1 + B * 2;

        // Check qualification
        if (totalScore >= X) {
            printf("Qualify\n");
        } else {
            printf("NotQualify\n");
        }
    }

    return 0;
}