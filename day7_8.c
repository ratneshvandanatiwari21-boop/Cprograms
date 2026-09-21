// Function: Without arguments and without return type
#include<stdio.h>
int subtraction(int , int);
void addition();
int main(){
    int n1, n2;
    printf("enter the values of n1 and n2\n");
    scanf("%d%d",&n1,&n2);
    int result = subtraction(n1,n2);
    printf("result = %d\n",result);

    addition();
    addition();
    addition();
    return 0;
}
int subtraction(int num1, int num2){
    int result = num1-num2;
    return result;
}
void addition(){
    int num1 , num2;
    printf("enter the values of num1, num2\n");
    scanf("%d%d",&num1,&num2);

    int result = num1+num2;
    printf("result = %d\n",result);
}
