//do while
#include<stdio.h>
int main(){
    float num1,num2,res;
    int choice;
    do
    {  
        printf("\n1-Addition\n2-Substraction\n3-Multiplication\n0-Exit\nEnter the Choice: ");
        scanf("%d",&choice);
        if (choice==0)
            goto END;
            
        printf("Enter the numbers: \n");
        scanf("%f%f",&num1,&num2);

        switch (choice)
        {
        case 1:
            res=num1+num2;
            printf("Result = %.2f\n",res);
            break;
        case 2:
            res=num1-num2;
            printf("Result = %.2f\n",res);
            break;
        case 3:
            res=num1*num2;
            printf("Result = %.2f\n",res);
            break;
        case 0:
            END:
            printf("Exit\nThank so much");
            break;
        
        default:
            invalid:
            printf("Invalid Choice!\n");
            break;
        }
    } while (choice!=0);
    return 1;
}