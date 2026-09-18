// /*Problem Description
// You are given a number n. Use any and every wise the number digit properties for smaller. The program
// should extract each digit using an iterative approach and compare them to identify the minimum digit.
// Requirements
// Read an integer.
// Determine smallest digits.
// Print smallest digit.*/

#include<stdio.h>
int main(){
    int num, digit , smallest = 9;;
    printf("Enter the Number: ");
    scanf("%d",&num);

    while (num>0)
    {
        digit=num%10;
        if (digit<smallest)
        {
            smallest=digit;
        } 
        num=num/10 ;  
    }
    printf("The smallest digit in the number is %d",smallest);
}