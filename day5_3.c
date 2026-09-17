// Conditional statements: if else
#include<stdio.h>
int main(){
    int num1 ,num2;
    printf("Enter the numbers num1 and num2: ");
    scanf("%d%d",&num1,&num2);

    if(num1>num2){
        printf("%d is greater then %d",num1,num2);
    }
    else{
        printf("%d is greater then %d",num2,num1);
    }

    return 0;

}