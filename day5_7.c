// Switch Case
#include<stdio.h>
int main(){
    int num1 , num2, choice;
    printf("enter the values of num1 , num2\n");
    scanf("%d%d",&num1,&num2);

    printf("1 Addition\n2 subtraction\n3 multiplication\n4 division\n");

    printf("enter the choice\n");
    scanf("%d",&choice);

    switch (choice)
    {
    case 1:
        printf("Addition= %d",num1+num2);
        break;
    case 2:
        printf("Substraction= %d",num1-num2);
        break;
    case 3:
        printf("Multiplication= %d",num1*num2);
        break;
    case 4:
        printf("Division= %d",num1/num2);
        break;
    default:
        break;
    }
}
