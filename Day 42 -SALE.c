#include <stdio.h>

int main() {
    int T; // Number of test cases
    scanf("%d", &T);

    while (T--) {
        int A, B, C;
        scanf("%d %d %d", &A, &B, &C);

        // Find the lowest price
        int lowest = A;
        if (B < lowest) lowest = B;
        if (C < lowest) lowest = C;

        // Calculate the total cost minus the lowest price
        int total_cost = A + B + C - lowest;

        // Print the result
        printf("%d\n", total_cost);
    }

    return 0;
}