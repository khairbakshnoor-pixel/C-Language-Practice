#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define NUM_CRICKETERS 20

struct cricketer {
    char name[50];
    int age;
    int test_matches;
    float average_runs;
};


int compare(const void *a, const void *b) {
    struct cricketer *c1 = (struct cricketer *)a;
    struct cricketer *c2 = (struct cricketer *)b;

    if(c1->average_runs < c2->average_runs) return -1;
    else if(c1->average_runs > c2->average_runs) return 1;
    else return 0;
}

int main() {
    struct cricketer players[NUM_CRICKETERS];
    int i;

    printf("Enter details of %d cricketers:\n", NUM_CRICKETERS);

    for(i = 0; i < NUM_CRICKETERS; i++) {
        printf("\nCricketer %d:\n", i + 1);

        printf("Name: ");
        scanf(" %[^\n]", players[i].name); 

        printf("Age: ");
        scanf("%d", &players[i].age);

        printf("Number of test matches: ");
        scanf("%d", &players[i].test_matches);

        printf("Average runs: ");
        scanf("%f", &players[i].average_runs);
    }

    qsort(players, NUM_CRICKETERS, sizeof(struct cricketer), compare);

    printf("\nCricketers sorted by average runs (ascending):\n");
    for(i = 0; i < NUM_CRICKETERS; i++) {
        printf("%s | Age: %d | Matches: %d | Average Runs: %.2f\n",
               players[i].name,
               players[i].age,
               players[i].test_matches,
               players[i].average_runs);
    }

    return 0;
}

