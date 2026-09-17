/*Pete and Billy have a watermelon weighing W kilograms.
Determine whether it can be divided into two positive even-weight parts.
Print:
YES if possible.
NO otherwise*/

#include<stdio.h>
int main(){
    int kg;
    printf("Enter the Weight of Watermelon: ");
    scanf("%d",&kg);

    if (kg%2==0)
        printf("YES");
    else
        printf("NO");
    return 1;
}