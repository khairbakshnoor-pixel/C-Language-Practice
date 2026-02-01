#include <stdio.h>

int main() {
    int players = 5, judges = 3;
    int ranks[5][3];
    int sum[5] = {0};
    int i, j, mvpIndex = 0;

    for (i = 0; i < players; i++) {
        printf("Enter ranks for Player %d by 3 judges: ", i + 1);
        for (j = 0; j < judges; j++) {
            scanf("%d", &ranks[i][j]);
            sum[i] += ranks[i][j];
        }
    }

    int maxSum = sum[0];
    for (i = 1; i < players; i++) {
        if (sum[i] > maxSum) {
            maxSum = sum[i];
            mvpIndex = i;
        }
    }

    printf("Player %d is the MVP with total rank %d\n", mvpIndex + 1, maxSum);
    return 0;
}

