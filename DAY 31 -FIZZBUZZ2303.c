#include <stdio.h>

int main() {
    int T; // Number of test cases
    scanf("%d", &T);
    
    while (T--) {
        int N; // Number of players
        scanf("%d", &N);
        
        // Calculate the number of choices for captain and vice-captain
        int choices = N * (N - 1);
        
        // Output the result
        printf("%d\n", choices);
    }
    
    return 0;
}