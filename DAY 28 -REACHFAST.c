#include <stdio.h>
#include <stdlib.h>

int main() {
    int T;
    scanf("%d", &T); // Read the number of test cases

    while (T--) {
        int A, B, K;
        scanf("%d %d %d", &A, &B, &K); // Read A, B, K for each test case

        // Calculate the distance
        int distance = abs(A - B);
        
        // Calculate the minimum number of steps required
        int steps = (distance + K - 1) / K; // Equivalent to ceil(distance / K)

        // Output the result
        printf("%d\n", steps);
    }

    return 0;
}
