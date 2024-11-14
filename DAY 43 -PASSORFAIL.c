#include <stdio.h>

int main() {
    int T; // Number of test cases
    scanf("%d", &T);
    
    while (T--) {
        int N, X, P;
        scanf("%d %d %d", &N, &X, &P);
        
        // Calculate Chef's score
        int score = 4 * X - N;
        
        // Check if Chef passes or fails
        if (score >= P) {
            printf("PASS\n");
        } else {
            printf("FAIL\n");
        }
    }
    
    return 0;
}
