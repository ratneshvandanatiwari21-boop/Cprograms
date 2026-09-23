#include<stdio.h>
int main(){
    char c;
    printf("Enter the charecter: ");
    scanf("%c",&c);

    if (47<c && c<58)
        printf("%c is a digit",c);
    else if (64<c && c<91)
        printf("%c is a Upper case Alphabet",c);
    else if (96<c && c<123)
        printf("%c is a Lower case Alphabet",c);
    else
        printf("I don't know..!");
    

}