// Switch Case
#include<stdio.h>
int main(){
    int num1 , num2, choice;
    printf("enter the values of num1 , num2\n");
    scanf("%d%d",&num1,&num2);

    printf("1 Addition\n 2 subtraction\n 3 multiplication\n 4 division\n");

    printf("enter the choice\n");
    scanf("%d",&choice);

    switch(choice){
        case 0+1 : 
            printf("Addition = %d\n",num1+num2);
            break;
        case 2 :
            printf("subtraction = %d\n",num1-num2);
            break;
        case 3 :
            printf("multiplication = %d\n",num1*num2);
            break;
        case 4 :
            printf("division = %d\n",num1/num2);
            break;
       default :
            printf("Invalid choice\n");
    }
    return 0;
}