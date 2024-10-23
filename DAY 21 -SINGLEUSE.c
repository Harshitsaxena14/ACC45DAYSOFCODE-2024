#include <stdio.h>

int main() {
    int T;
    scanf("%d", &T); // Read number of test cases
    while (T--) {
        int H, X, Y;
        scanf("%d %d %d", &H, &X, &Y); // Read H, X, Y

        // Calculate attacks without special attack
        int attacks_without_special = (H + X - 1) / X;

        // Calculate remaining health after special attack
        int remaining_health = H - Y;
        int attacks_with_special = (remaining_health + X - 1) / X;

        // Total attacks with special attack
        int total_attacks_with_special = 1 + attacks_with_special;

        // Determine the minimum attacks needed
        int min_attacks = attacks_without_special < total_attacks_with_special ? 
                          attacks_without_special : 
                          total_attacks_with_special;

        // Print the result for the current test case
        printf("%d\n", min_attacks);
    }
    return 0;
}
