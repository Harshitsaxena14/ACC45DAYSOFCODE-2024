#include <stdio.h>

int main() {
    int T;  // Number of test cases
    scanf("%d", &T);

    while (T--) {
        int X, Y, R;
        scanf("%d %d %d", &X, &Y, &R);

        int extraSticks = R / 30; // Calculate extra sticks Chef ate
        int totalSticks = X + extraSticks; // Total sticks Chef ate
        int plates = (totalSticks + Y - 1) / Y; // Calculate plates using ceiling division

        printf("%d\n", plates); // Output the result
    }

    return 0;
}
