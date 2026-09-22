//break statement
#include <stdio.h>
int main(){
    int num , i;
    printf("Enter the number : ");
    scanf("%d",&num);
    for ( i = 2; i < num; i++)
    {
        if(num%i==0){
            printf("%d is not a Prime number",num);
            break;
        }
    }
    if(num==i)
    printf("%d is a Prime number",num);
    return 0; 
    
}