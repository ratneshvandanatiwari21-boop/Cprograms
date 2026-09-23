//Write a C program that uses separate functions to perform the following bitwise operations on two integers:
#include<stdio.h>

int bitwiseAND(int num1,int num2){
    return num1&num2;
}

int bitwiseOR(int num1,int num2){
    return num1|num2;
}

int bitwiseXOR(int num1,int num2){
    return num1^num2;
}

int bitwiseleftshift(int num1,int num2){
    return num1<<num2;
}

int bitwiserightshift(int num1,int num2){
    return num1>>num2;
}

int main(){
    int n1,n2,shift,result,choice;
    do
    {
        printf("\n----- Bitwise Operations Menu -----\n");
        printf("1. Bitwise AND (&)\n");
        printf("2. Bitwise OR (|)\n");
        printf("3. Bitwise XOR (^)\n");
        printf("4. Left Shift (<<)\n");
        printf("5. Right Shift (>>)\n");
        printf("6. Exit\n");

        printf("Enter the choice: ");
        scanf("%d",&choice);

        switch (choice)
        {
        case 1:
            printf("Enter Number1: ");
            scanf("%d",&n1);
            printf("Enter Number2: ");
            scanf("%d",&n2);

            result=bitwiseAND(n1,n2);
            printf("Result = %d",result);

            break;

        case 2:
            printf("Enter Number1: ");
            scanf("%d",&n1);
            printf("Enter Number2: ");
            scanf("%d",&n2);

            result=bitwiseOR(n1,n2);
            printf("Result = %d",result);

            break;

        case 3:
            printf("Enter Number1: ");
            scanf("%d",&n1);
            printf("Enter Number2: ");
            scanf("%d",&n2);

            result=bitwiseXOR(n1,n2);
            printf("Result = %d",result);

            break;
        
        case 4:
            printf("Enter Number1: ");
            scanf("%d",&n1);
            printf("Enter shifting number: ");
            scanf("%d",&shift);

            result=bitwiseleftshift(n1,shift);
            printf("Result = %d",result);

            break;
        
            case 5:
            printf("Enter Number1: ");
            scanf("%d",&n1);
            printf("Enter shifting number: ");
            scanf("%d",&shift);

            result=bitwiserightshift(n1,shift);
            printf("Result = %d",result);

            break;
        
        case 6:
            printf("Exit....!");
            break;
        
        default:
            printf("Invalid Choice....!");
            break;
        }

    } while (choice!=6);
    
}