//Displays a Pattern-Based Number Series Using Loop
#include<stdio.h>
int main(){
    int num=36;
    printf("%d\t", num);

    for (int i = 2 ; num >24; i++)
    {
        if (i%2==0)
        {
            num = num - 2;
        }
        else
        {
            num = num - 4;
        }

        printf("%d\t",num);
    }
    return 0;

}