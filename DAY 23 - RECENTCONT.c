#include <stdio.h>
#include <string.h>

int main() {
    int T; // Number of test cases
    scanf("%d", &T);
    
    while (T--) {
        int N; // Total count of problems
        scanf("%d", &N);
        
        int count_START38 = 0; // Count for START38
        int count_LTIME108 = 0; // Count for LTIME108
        
        for (int i = 0; i < N; i++) {
            char contest_code[9]; // To hold contest code, max length is 8 + 1 for null terminator
            scanf("%s", contest_code);
            
            if (strcmp(contest_code, "START38") == 0) {
                count_START38++;
            } else if (strcmp(contest_code, "LTIME108") == 0) {
                count_LTIME108++;
            }
        }
        
        // Output the counts for this test case
        printf("%d %d\n", count_START38, count_LTIME108);
    }
    
    return 0;
}