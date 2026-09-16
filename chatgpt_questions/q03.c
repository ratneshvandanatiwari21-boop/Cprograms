/*Accept the radius of a circle and calculate its area and circumference.
Area = πr², Circumference = 2πr*/

#include<stdio.h>
int main(){
    float r;
    printf("Enter the radius of circle: ");
    scanf("%f",&r);
    float a=3.14159*(r*r);
    float c=2*3.14159*r;
    printf("Area of Circle = %.2f\n",a);
    printf("Circumference of Circle = %.2f",c);

    return 0;
}