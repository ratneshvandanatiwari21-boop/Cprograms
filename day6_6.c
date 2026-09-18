// Loops: While loop
// Entry control loops
//      * while loop
//      * for loop
// Exit control loops
//      * do while loop

#include <stdio.h>
int main(){
    int num , i=1;
    printf("Enter the number: ");
    scanf("%d",&num);
    while(i<=10){
        printf("%d X %d = %d\n",num,i,num*i);
        i++;
    }

}