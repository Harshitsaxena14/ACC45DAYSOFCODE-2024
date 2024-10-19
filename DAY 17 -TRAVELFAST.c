#include <stdio.h>

int main() {
    int T; // Number of test cases
    scanf("%d", &T); // Read the number of test cases

    for (int i = 0; i < T; i++) {
        int X, Y; // X for Bike, Y for Car
        scanf("%d %d", &X, &Y); // Read the times

        // Compare the times and print the result
        if (X < Y) {
            printf("BIKE\n"); // Bike is faster
        } else if (X > Y) {
            printf("CAR\n"); // Car is faster
        } else {
            printf("SAME\n"); // Both take the same time
        }
    }

    return 0; // End of the program
}
