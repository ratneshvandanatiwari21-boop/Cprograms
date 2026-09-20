//Write a C program that repeatedly asks the user to enter an integer and checks whether it is a palindrome
//number.

#include<stdio.h>
int main(){
    int num,digit,rem,reverse,original;
    do{
    printf("Enter the Number: ");
    scanf("%d",&num);
    original = num; 
    reverse=0;
    while (num > 0) {
        rem = num % 10;
        reverse = reverse * 10 + rem;
        num = num / 10;
        }
        if (original == reverse) {
            printf("Palindrome number entered successfully.\n");
        } 
        else {
            printf("Not a palindrome. Please try again.\n");
        }

    }while (original!=reverse);
    return 0;   
}
