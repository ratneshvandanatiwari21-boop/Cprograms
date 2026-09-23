// Write a C program that uses a function to display the binary representation of a given decimal number.
#include<stdio.h>
void binary(int num){
    if (num==0)
        return;
    binary(num/2);
    printf("%d",num%2);

}
int main(){
    int n;
    printf("Enter the number: ");
    scanf("%d",&n);
    if (n == 0)
        printf("0");
    else
        binary(n);
}