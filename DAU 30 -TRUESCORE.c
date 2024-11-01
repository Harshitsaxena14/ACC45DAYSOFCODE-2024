#include <stdio.h>

int main() {
    int T;
    scanf("%d", &T); // Read number of test cases

    while (T--) {
        int A, B, C, D;
        scanf("%d %d", &A, &B); // Read initial scores
        scanf("%d %d", &C, &D); // Read final scores

        // Check if the transition from A:B to C:D is possible
        if (C >= A && D >= B) {
            printf("POSSIBLE\n");
        } else {
            printf("IMPOSSIBLE\n");
        }
    }

    return 0;
}
