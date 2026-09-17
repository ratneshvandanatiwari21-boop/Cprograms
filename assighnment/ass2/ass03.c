/*Write a program to calculate toll tax based on the vehicle type and travelling distance.
Vehicle Types:
C- Car
B- Bus
T- Truck
G - Government
Use nested if statements.
Distance Slabs:
Up to 50 km → 55.50
Up to 100 km → 90.75
101-250 km → ₹145.25 + ₹1.25 per km
Above 250 km → 255.25 + *0.75 per km
Display an appropriate message for an invalid vehicle type.
Government vehicles are exempted from toll tax.
*/

#include <stdio.h>
int main(){
    int km;
    char ch;
    printf("Enter the Kilometer: ");
    scanf("%d",&km);

    printf("Enter the condition:\nC- Car\nB- Bus\nT- Truck\nG - Government\n");
    scanf(" %c", &ch);

    switch (ch)
    {
    case 'C':
        if(km<=50)
            printf("Total Tax = Rs %.2f/-",55.50);
        else if (km<=100 && km>50)
           printf("Total Tax = Rs %.2f/-",90.75);
        else if (km<=250 && km>100)
            printf("Total Tax = Rs %.2f/-",145.25+(km-100)*1.25);
        else
            printf("Total Tax = Rs %.2f/-",255.25+(km-250)*0.75);
        break;

        case 'B':
        if(km<=50)
            printf("Total Tax = Rs %.2f/-",55.50);
        else if (km<=100 && km>50)
           printf("Total Tax = Rs %.2f/-",90.75);
        else if (km<=250 && km>100)
            printf("Total Tax = Rs %.2f/-",145.25+(km-100)*1.25);
        else
            printf("Total Tax = Rs %.2f/-",255.25+(km-250)*0.75);
        break;

        case 'T':
        if(km<=50)
            printf("Total Tax = Rs %.2f/-",55.50);
        else if (km<=100 && km>50)
           printf("Total Tax = Rs %.2f/-",90.75);
        else if (km<=250 && km>100)
            printf("Total Tax = Rs %.2f/-",145.25+(km-100)*1.25);
        else
            printf("Total Tax = Rs %.2f/-",255.25+(km-250)*0.75);
        break;

        case 'G':
        if(km<=50)
            printf("Total Tax = Rs %.2f/-",55.50);
        else if (km<=100 && km>50)
           printf("Total Tax = Rs %.2f/-",90.75);
        else if (km<=250 && km>100)
            printf("Total Tax = Rs %.2f/-",145.25+(km-100)*1.25);
        else
            printf("Total Tax = Rs %.2f/-",255.25+(km-250)*0.75);
        break;
    default:
        break;
    }
    return 0;
}