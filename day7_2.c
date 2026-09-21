// do while with switch case
// Switch Case
// Switch Case
#include<stdio.h>
int main(){
    int num1 , num2, choice;
    printf("enter the values of num1 , num2\n");
    scanf("%d%d",&num1,&num2);
 do{
    printf("1 Addition\n2 subtraction\n3 multiplication\n4 division\n");

    printf("enter the choice\n");
    scanf("%d",&choice);

    switch(choice){
        case 1 : 
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
        case 0 :
            printf("Exit!");
            break;
       default :
            printf("Invalid choice\n");
    }
}while(choice != 0);
    return 0;
}