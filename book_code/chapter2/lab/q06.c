//WAP to convert temp in fahrenheit to celsius
#include<stdio.h>
int main(){
    float feh;
    printf("Enter the Degree celsius: ");
    scanf("%f",&feh);
    float degree=(float)5/9*(feh-32);
    printf("Celsius = %.2f",degree);

    return 0;
}