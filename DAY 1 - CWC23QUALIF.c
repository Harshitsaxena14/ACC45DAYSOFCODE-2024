#include <stdio.h>

int main() {
    // your code goes here
    int points;

    // Get the total points scored by the team
    scanf("%d", & points);

    // Check if the team has qualified for the next stage
    if (points >= 12) {
        printf("Yes\n");
    } else {
        printf("No\n");
    }

    return 0;

}