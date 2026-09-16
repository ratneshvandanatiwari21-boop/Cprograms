/*Write a program to accept a 5-digit integer and determine whether it is a palindrome.
Input Format
A single 5-digit integer N.
Output Format
Print:
Palindrome if the number is a palindrome.
Not Palindrome otherwise.*/

# include<stdio.h>
int main(){
    int num;
    printf("Enter five Digit number: ");
    scanf("%d",&num);
    int res=num/10000;
    num=num%10000;
    int res1=num/1000;
    num=num%1000;
    int res2=num/100;
    num=num%100;
    int res3=num/10;
    num=num%10;
    int res4=num;

    if (res == res4 && res1 == res3) {
        printf("Palindrome");
    }

    else{
        printf("Not Palindrome");
    }

    return 0;
}