//Find Least Common Multiple (LCM) of Two Numbers Using Loop
#include<stdio.h>
int main(){
    int num1, num2, max;
    printf("Enter the Two Numbers: \n");
    scanf("%d%d",&num1,&num2);
    for (max = 1; ; max++)
    {
        if (max%num1==0 && max%num2==0)
        {
            printf("LCM = %d", max);
            break;
        } 
    }
    return 0;
}