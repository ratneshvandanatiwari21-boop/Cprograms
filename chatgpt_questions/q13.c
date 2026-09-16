/*Accept a 5-digit integer and display its first and last digits.*/
#include <stdio.h>
int main(){
    int num;
    printf("Enter 5 digit number: ");
    scanf("%d",&num);

    int res= num/10000;
    int res1 = num%10;

    printf("First Digit = %d\n",res);
    printf("Last Digit = %d",res1);

    return 1;
}