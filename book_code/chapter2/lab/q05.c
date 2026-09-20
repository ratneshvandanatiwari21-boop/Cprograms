//WAP to convert temp in celsius to fahrenheit
#include<stdio.h>
int main(){
    float degree;
    printf("Enter the Degree celsius: ");
    scanf("%f",&degree);
    float feh=(float)9/5*degree+32;
    printf("Fahrenheit = %.2f",feh);

    return 0;
}