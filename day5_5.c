// Nestesd if-else
#include<stdio.h>
int main(){
    int num1 , num2 , num3 ;
    printf("Enter the numbers: \n");
    scanf("%d%d%d",&num1,&num2,&num3);

    if (num1>num2){
        if (num1>num3){
            printf("%d is greater then %d and %d",num1,num2,num3);
        }
        else{
            printf("%d is greater then %d and %d",num3,num1,num2);
        }
    }\
    else{
        if(num2>num3){
            printf("%d is greater then %d and %d",num2,num1,num3);
        }
        else{
            printf("%d is greater then %d and %d",num3,num1,num2);
        }
    }
}