#include <stdio.h>

int main() {
    int T; // Number of test cases
    scanf("%d", &T);

    while (T--) {
        int X, Y; // Capacity of geyser and bucket
        scanf("%d %d", &X, &Y);

        // Calculate the maximum number of people
        int maxPeople = X / (2 * Y);

        // Output the result for the current test case
        printf("%d\n", maxPeople);
    }

    return 0;
}