//goto Statement:
#include<stdio.h>
int main(){
    float num1 , num2 , result;
    int choice;
    printf("Enter the Numbers: \n");
    scanf("%f%f",&num1,&num2);
    printf("1-Addition\n2-Substraction\n3-Multiplication\nEnter Your Choice: ");
    scanf("%d",&choice);

    switch (choice)
    {
    case 1:{
        result=num1+num2;
        printf("Result=%.2f",result);
        break;
    }
    case 2:{
        result=num1-num2;
        printf("Result=%.2f",result);
        break;
    }
    case 3:{
        result=num1*num2;
        printf("Result=%.2f",result);
        break;
    }
    default:
        printf("Invalid choice");
        break;
    }
}