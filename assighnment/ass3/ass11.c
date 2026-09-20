//Write a C program that accepts a character and a number of rows from the user, and prints a pattern where
//the character shifts one position to the right in each row.

#include<stdio.h>
int main(){
    char ch;
    int n;
    printf("Enter the Pattern(ch): ");
    scanf("%c",&ch);
    printf("Enter the number of times: ");
    scanf("%d",&n);

    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j<=i ; j++)
        {
            if (j==i)
            {
                printf("%c",ch);
            }
            else
            {
                printf(" ");  
            }   
        }
        printf("\n");
    }
    
}