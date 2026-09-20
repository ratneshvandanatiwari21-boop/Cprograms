#include<stdio.h>
int main(){
    char choice;
    printf("Enter the Choice: ");
    choice=getchar();
    switch (choice)
    {
    case 'A':
        printf("Apple");
        break;
    case 'B':
        printf("Ball");
        break;
    case 'C':
        printf("Cat");
        break;
    case 'D':
        printf("Dog");
        break;
    
    default:
        printf("Invalid Input");
        break;
    }
}