#include <stdio.h>

int main() {
    int N;
    scanf("%d", &N); // Read the number of rounds

    int cumulativeScore1 = 0;
    int cumulativeScore2 = 0;
    int maxLead = 0;
    int winner = 0;

    for (int i = 0; i < N; i++) {
        int score1, score2;
        scanf("%d %d", &score1, &score2); // Read scores for Player 1 and Player 2

        // Update cumulative scores
        cumulativeScore1 += score1;
        cumulativeScore2 += score2;

        // Determine the leader and the lead
        int lead = 0;
        if (cumulativeScore1 > cumulativeScore2) {
            lead = cumulativeScore1 - cumulativeScore2;
            if (lead > maxLead) {
                maxLead = lead;
                winner = 1; // Player 1 is the leader
            }
        } else {
            lead = cumulativeScore2 - cumulativeScore1;
            if (lead > maxLead) {
                maxLead = lead;
                winner = 2; // Player 2 is the leader
            }
        }
    }

    // Output the winner and the maximum lead
    printf("%d %d\n", winner, maxLead);
    return 0;
}