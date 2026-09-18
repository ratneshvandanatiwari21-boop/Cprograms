// Switch case with character
// Switch Case
#include<stdio.h>
int main(){
    int num1 , num2;
    char choice;
    printf("enter the values of num1 , num2\n");
    scanf("%d%d",&num1,&num2);

    printf("+ Addition\n- subtraction\n* multiplication\n/ division\n");

    printf("enter the choice\n");
    scanf(" %c",&choice);

    switch (choice)
    {
    case '+':
        printf("Addition= %d",num1+num2);
        break;
    case '-':
        printf("Substraction= %d",num1-num2);
        break;
    case '*':
        printf("Multiplication= %d",num1*num2);
        break;
    case '/':
        printf("Division= %d",num1/num2);
        break;
    default:
        break;
    }

}