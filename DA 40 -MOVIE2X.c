#include <stdio.h>

int main() {
    int X, Y;
    
    // Read the total length of the movie and the first part duration
    scanf("%d %d", &X, &Y);
    
    // Calculate the time spent watching the first Y minutes at 2x speed
    int timeAtDoubleSpeed = Y / 2;
    
    // Calculate the time spent watching the remaining part of the movie
    int remainingTime = X - Y;
    
    // Total time spent watching the movie
    int totalTime = timeAtDoubleSpeed + remainingTime;
    
    // Output the total time
    printf("%d\n", totalTime);
    
    return 0;
}