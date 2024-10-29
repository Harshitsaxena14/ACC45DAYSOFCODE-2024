#include <stdio.h>

int main() {
    int T;
    scanf("%d", &T); // Read number of test cases

    while (T--) {
        int N, K;
        scanf("%d %d", &N, &K); // Read N and K

        int count = 0; // Initialize count of Wolverine-like minions
        for (int i = 0; i < N; i++) {
            int characteristic;
            scanf("%d", &characteristic); // Read each minion's characteristic value

            // Calculate new characteristic value
            int new_value = characteristic + K;

            // Check if the new value is divisible by 7
            if (new_value % 7 == 0) {
                count++; // Increment the count
            }
        }

        // Output the result for the current test case
        printf("%d\n", count);
    }

    return 0;
}