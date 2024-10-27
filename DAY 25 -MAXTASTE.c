#include <stdio.h>

int main() {
    int T; // Number of test cases
    scanf("%d", &T);

    while (T--) {
        int a, b, c, d;
        // Read tastiness values for the ingredients
        scanf("%d %d %d %d", &a, &b, &c, &d);

        // Calculate the maximum possible tastiness
        int maxTastiness = (a > b ? a : b) + (c > d ? c : d);

        // Output the result
        printf("%d\n", maxTastiness);
    }

    return 0;
}