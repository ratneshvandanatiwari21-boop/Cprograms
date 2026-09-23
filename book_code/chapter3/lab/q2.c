#include<stdio.h>
int main(){
    int month,year;
    printf("Enter the Year: ");
    scanf("%d",&year);

    printf("1-January\n2-February\n3-March\n4-April\n5-May\n6-June\n7-July\n8-August\n9-September\n10-October\n11-November\n12-December\nEnter the Month: ");
    scanf("%d",&month);

    switch (month)
    {
    case 1: case 3: case 5: case 7: case 8: case 10: case 12:
        printf("In this %d year, the number of 31 days in this month",year);
        break;
    case 4: case 6: case 9: case 11:
        printf("In this %d year, the number of 30 days in this month",year);
        break;
    case 2:
        if ((year%4==0 && year%100!=0)||year%400==0)        
            printf("In this %d year, the number of 29 days in this month",year);
        else
            printf("In this %d year, the number of 28 days in this month",year);
        break;
    default:
        printf("Invalid Month...!");
        break;
    }
}