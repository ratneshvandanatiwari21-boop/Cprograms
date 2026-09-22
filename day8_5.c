// Recursion
// 5 * 4 * 3 * 2 * 1

#include<stdio.h>
int my_fact(int num1){
    if (num1==0)
        return 1;
    return num1*my_fact(num1-1);
}
int main(){
    int n1;
    printf("Enter the number: ");
    scanf("%d",&n1);
    int result = my_fact(n1);
    printf("Result = %d",result);
}