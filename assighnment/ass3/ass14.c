/*rite a C program to simulate a simple voting system for four candidates. The program should allow users to
cast votes repeatedly until they decide to stop.
*/
#include <stdio.h>

int main() {
    int choice;
    int count1 = 0, count2 = 0, count3 = 0, count4 = 0;

    do {
        printf("\n1. Narendra Modi");
        printf("\n2. Mamata Banerjee");
        printf("\n3. Rahul Gandhi");
        printf("\n4. Arvind Kejriwal");
        printf("\n0. Stop Voting");
        printf("\nEnter Your Choice: ");
        scanf("%d", &choice);
        switch (choice) {
            case 1:
                count1++;
                break;
            case 2:
                count2++;
                break;
            case 3:
                count3++;
                break;
            case 4:
                count4++;
                break;
            case 0:
                printf("Voting Stopped.\n");
                break;
            default:
                printf("Invalid Choice!\n");
        }

    } while (choice != 0);
    printf("\n--- Voting Result ---\n");
    printf("Narendra Modi   : %d vote(s)\n", count1);
    printf("Mamata Banerjee : %d vote(s)\n", count2);
    printf("Rahul Gandhi    : %d vote(s)\n", count3);
    printf("Arvind Kejriwal : %d vote(s)\n", count4);
    return 0;
}