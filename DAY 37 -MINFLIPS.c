#include <stdio.h>

int main() {
    int T; // Number of test cases
    scanf("%d", &T);

    while (T--) {
        int N; // Length of the array
        scanf("%d", &N);

        int count_1 = 0, count_neg1 = 0;
        for (int i = 0; i < N; i++) {
            int value;
            scanf("%d", &value);
            if (value == 1) {
                count_1++;
            } else {
                count_neg1++;
            }
        }

        // Check if N is odd
        if (N % 2 != 0) {
            printf("-1\n");
        } else {
            int target_count = N / 2;
            // Calculate the minimum number of flips needed
            int flips = (count_1 > target_count) ? (count_1 - target_count) : (count_neg1 - target_count);
            printf("%d\n", flips);
        }
    }

    return 0;
}