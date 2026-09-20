#include<stdio.h>
int main(){
    int a,b,max;
    printf("Enter the Number: \n");
    scanf("%d%d",&a,&b);
    if(a>b){
        max=a;
    }
    else{
        max=b;
    }
    printf("Max Number in %d and %d is %d",a,b,max);
    return 0;
}