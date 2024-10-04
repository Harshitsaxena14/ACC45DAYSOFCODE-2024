#include <stdio.h>

int main() {
    int T, X;
    scanf("%d", &T);
    while (T--) {
        scanf("%d", &X);
        if (X <= 7) {
            printf("Yes\n");
        } else {
            printf("No\n");
        }
    }
    return 0;
}