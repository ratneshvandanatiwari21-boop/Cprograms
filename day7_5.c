#include<stdio.h>
int main(){
    END:{
        for (int i = 1; i <= 3; i++)
        {
            for ( int j = 1; j <= 3; j++)
            {
                printf("%4d",i);
                if(j==3)
                goto END;
            }   
        }   
    }
}