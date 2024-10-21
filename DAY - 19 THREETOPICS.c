#include <stdio.h>

int main() {
    int T; // Number of test cases
    scanf("%d", &T);
    
    while (T--) {
        int N, X, Y;
        scanf("%d %d %d", &N, &X, &Y);
        
        // Check if Y is a multiple of X and does not exceed N * X
        if (Y % X == 0 && Y <= N * X) {
            printf("YES\n");
        } else {
            printf("NO\n");
        }
    }
    
    return 0;
}