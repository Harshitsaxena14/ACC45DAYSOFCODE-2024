#include <stdio.h>
#include <math.h>

int is_prime(int n) {
    if (n <= 1) {
        return 0; // 1 is not prime
    }
    if (n <= 3) {
        return 1; // 2 and 3 are prime
    }
    if (n % 2 == 0 || n % 3 == 0) {
        return 0; // exclude multiples of 2 and 3
    }
    for (int i = 5; i * i <= n; i += 6) {
        if (n % i == 0 || n % (i + 2) == 0) {
            return 0; // found a factor
        }
    }
    return 1; // no factors found, n is prime
}

int main() {
    int T;
    scanf("%d", &T); // Read number of test cases

    while (T--) {
        int N;
        scanf("%d", &N); // Read the number to test

        // Check if N is prime and print the result
        if (is_prime(N)) {
            printf("yes\n");
        } else {
            printf("no\n");
        }
    }

    return 0;
}