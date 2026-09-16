/*Accept Principal, Rate, and Time. Calculate and display Simple Interest and Total Amount.
SI = (P × R × T) / 100*/

#include<stdio.h>
int main(){
    int p;
    float t;
    float r;
    printf("Enter the Principal Amount: ");
    scanf("%d",&p);
    printf("Enter the Rate of Intrest: ");
    scanf("%f",&r);
    printf("Enter the Time Period: ");
    scanf("%f",&t);

    double si= (p*r*t)/100;
    double a=p+si;

    printf("Simple Intrest = Rs. %.2lf/-\n",si);
    printf("Total Amount = Rs. %.2lf/-",a);

    return 0;
}