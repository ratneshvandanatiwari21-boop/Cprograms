//Write a C program to generate a hash code from a given integer and compare it with a user-provided key
//value.
#include<stdio.h>
int main(){
    int num, key_value,digit,sum=0,i=1;
    printf("Enter the number: ");
    scanf("%d",&num);

    printf("Enter the Key value: ");
    scanf("%d",&key_value);
    
    while(num>0){
        digit=num%10;
        sum+=(i*digit);
        num=num/10;
        i++;
    }
    if (sum==key_value)
    {
        printf("Genrated Hash Code = %d\nKey Matched",sum);
    }
    else
        printf("Genrated Hash Code = %d\nKey did not Matched",sum);

}