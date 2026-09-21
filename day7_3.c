// jump statements: Break
#include<stdio.h>
int main(){
    int i=1;
    while (i<=10)
    {
        printf("%d\t",i);
        if (i==7)
        {
            break;
        }
        i++;
    }
    
}