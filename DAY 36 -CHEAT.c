#include <stdio.h>

int main() {
    int T; // Number of test cases
    scanf("%d", &T);

    while (T--) {
        int N; // Number of spooky days
        scanf("%d", &N);

        // Calculate the number of Tuesdays
        int tuesdays = (N - 1 + 6) / 7; // Use ceiling logic: (N - 1 + 6) / 7
        
        // Output the result
        printf("%d\n", tuesdays);
    }

    return 0;
}