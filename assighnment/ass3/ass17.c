/*rite a C program to identify and display all composite numbers between 2 and 1000.*/
#include<stdio.h>
int main(){
    int num=2;
    while (num<=1000)
    {
        for (int i = 2; i <num; i++)
        {
            if (num%i==0)
            {
                printf("%d\n",num);
                break;
            }
        }
        num++;
        
    }
    
}