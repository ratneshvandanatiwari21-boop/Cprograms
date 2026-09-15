/*Write a C program to calculate the area and perimeter of a rectangle.
The program should:
Accept the length and breadth of the rectangle from the user.
Calculate the area and perimeter using the following formulas:
Area = Length × Breadth
Perimeter = 2 x (Length + Breadth)
Perform the calculations using the following data types:
o char
o short
o int
o long
Compare the results obtained for small and large input values.*/

#include<stdio.h>
int main(){
    double length,breath,area,perimeter;
    printf("Enter the Length:\n");
    scanf("%lf",&length);
    printf("Enter the Breath:\n");
    scanf("%lf",&breath);
    
    area=length*breath;
    perimeter=2*(length+breath);

    printf("Area of Rectangle = %.2lf\n",area);
    printf("Perimeter of Ractangle = %.2lf\n",perimeter);

    return 0;
}