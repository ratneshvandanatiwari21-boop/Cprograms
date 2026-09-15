/*rite a C program to convert an amount given in Rupees and Paise into total paise and then convert it
back into Rupees.
The program should:
이
Accept the Rupees and Paise separately from the user.
Calculate the total amount in paise.
Convert the total paise back into Rupees using explicit type casting.
Display the final amount with two decimal places.*/

#include<stdio.h>
int main(){
    int rupee , paise;
    printf("Enter the Pupee: ");
    scanf("%d",&rupee);

    printf("Enter the Paise; ");
    scanf("%d",&paise);

    int total_paises=(rupee*100)+paise;
    float total_rupee=(float)total_paises/100;

    printf("Total Paise %d\n",total_paises);
    printf("Total Rupee %.2f\n",total_rupee);

    return 0;

}