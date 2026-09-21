//rite a C program that uses a recursive function to determine whether a given number is a palindrome.
#include <stdio.h>

int palindrome(int num,int rev){
    if (num==0)
        return rev;
    return palindrome(num / 10, rev * 10 + num % 10);
}
int main()
{
    int num, result;

    printf("Enter a number: ");
    scanf("%d", &num);
    result = palindrome(num, 0);

    if (num == result)
        printf("Palindrome");
    else
        printf("Not Palindrome");

    return 0;
}