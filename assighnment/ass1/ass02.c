/*Write a C program to accept a character from the user and display the following information:
The entered character
Its ASCII value
The next character
The previous character
The program should store the ASCII value using the following integral data types and observe the results:
char
short
int
long
*/
#include<stdio.h>
int main(){
    char ch;
    printf("Enter the Charecter:\n");
    scanf("%c",&ch);

    printf("The entered character: %c\n",ch);
    printf("Its ASCII value: %d\n",ch);
    char ch1=ch-1;
    printf("The previous character: %c\n",ch1);

    char ch2=ch+1;
    printf("The Next character: %c\n",ch2);
    
    return 1;
}
