/*Write a program to calculate the electricity bill based on the consumer category and number of units
consumed.
Use a switch statement to select the category:
D - Domestic
C- Commercial
Inside each case, use an if-else-if ladder to calculate the bill according to the following slabs.
Domestic Consumer
Units Rate
First 100 Units 4.70 per unit
Next 100 Units 7.15 per unit
Next 100 Units 10.35 per unit
Above 300 Units *14.55 per unit
Commercial Consumer
Units Rate
First 100 Units 6.45 per unit
Next 100 Units 9.35 per unit
Next 100 Units 14.85 per unit
Above 300 Units 17.15 per unit UNBEAM
Input Format
Consumer Category (D or C)
Number of Units
Output Format
Display the total electricity bill.
*/

#include <stdio.h>

int main() {
    char choice;
    int num;
    printf("Enter the units: \n");
    scanf("%d", &num);
    printf("Enter the condition:\nD for Domestic\nC for Commercial\n");
    scanf(" %c", &choice);
    switch (choice)
    {
        case 'D':
            if (num <= 100)
                printf("The total electricity bill %.2f", num * 4.70);
            else if (num <= 200 && num > 100)
                printf("The total electricity bill %.2f",
                       100 * 4.70 + (num - 100) * 7.15);
            else if (num <= 300 && num > 200)
                printf("The total electricity bill %.2f",
                       100 * 4.70 + 100 * 7.15 + (num - 200) * 10.35);
            else
                printf("The total electricity bill %.2f",
                       100 * 4.70 + 100 * 7.15 + 100 * 10.35
                       + (num - 300) * 14.55);
            break;
        case 'C':
            if (num <= 100)
                printf("The total electricity bill %.2f", num * 6.45);
            else if (num <= 200 && num > 100)
                printf("The total electricity bill %.2f",
                       100 * 6.45 + (num - 100) * 9.35);
            else if (num <= 300 && num > 200)
                printf("The total electricity bill %.2f",
                       100 * 6.45 + 100 * 9.35 + (num - 200) * 14.85);
            else
                printf("The total electricity bill %.2f",
                       100 * 6.45 + 100 * 9.35 + 100 * 14.85
                       + (num - 300) * 17.15);
            break;
        default:
            printf("Invalid choice");
            break;
    }
    return 0;
}