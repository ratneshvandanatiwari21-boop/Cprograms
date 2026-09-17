/*Display the following menu:
1. Circle
2. Rectangle
3. Triangle
0. Exit
Use a switch statement to select the shape.
Calculate the area and perimeter of the selected shape.
Validate all dimensions before performing calculations.*/
#include<stdio.h>
int main(){
    int num;
    printf("Select the Condition: \n1. Circle\n2. Rectangle\n3. Triangle\n0. Exit\n");
    scanf("%d",&num);
    switch (num)
    {
    case 1:{
        double r;
        printf("Enter the Radius: ");
        scanf("%lf",&r);
        double area = 3.142857*r*r;
        double peri = 2.0*3.142857*r;
        printf("AREA = %.2lf sq.metre\n",area);
        printf("peri = %.2lf metre",peri);
        break;
    }
    case 2:{
        double a,b;
        printf("Enter the Length and Breadth: ");
        scanf("%lf%lf",&a,&b);
        double area = a*b;
        double peri = 2*(a+b);
        printf("AREA = %.2lf sq.metre\n",area);
        printf("peri = %.2lf metre",peri);
        break;
    }
    case 3:{
        double a,b,c;
        printf("Enter the side1 side2 side3: ");
        scanf("%lf%lf%lf",&a,&b,&c);
        double s = (a+b+c)/2;
        double area =s*(s-a)*(s-b)*(s-c) ;
        double peri = a+b+c;
        printf("AREA = %.2lf sq.metre\n",area);
        printf("peri = %.2lf metre",peri);
        break;
    }
    case 0:{
        printf("Exit");
    }
    default:
        break;
    }
}