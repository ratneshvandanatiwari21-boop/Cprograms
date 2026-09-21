//Write a C program that uses separate functions to perform the following arithmetic operations:

#include<stdio.h>
int arithmatic(int , int);

int main(){
    int n1,n2;
    printf("Enter the number: \n");
    scanf("%d%d",&n1,&n2);

    int result =arithmatic(n1,n2);
    printf("Result = %d",result);
    result =arithmatic(24,22);
    result =arithmatic(12,12);
    result =arithmatic(12,4);
    result =arithmatic(12,0);

}

int arithmatic(int num1, int num2){
    int choice;
    int res;
    printf("\n1. Addition\n2. Subtraction\n3. Multiplication\n4. Division\nEnter Your Choice: ");
    scanf("%d",&choice);
    switch (choice)
    {
    case 1:
        res=num1+num2;
        return res;
    case 2:
        res=num1-num2;
        return res;
    case 3:
        res=num1*num2;
        return res;
    case 4:
        if (num2 != 0)
            {
                res = num1 / num2;
                return res;
            }
            else
            {
                printf("Division by zero is not possible.\n");
                return 0;
            }
    default:
        printf("Invalid Choice: ");
        break;
    }
}
