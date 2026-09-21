//Print Hourglass Star Pattern Using Nested Loops
#include<stdio.h>
int main(){
    for (int i = 1; i < 6; i++)
    {
        for (int j = 1; j < 6; j++)
        {
            if ((i == 2 && (j == 1 || j == 5)) ||
                (i == 3 && (j == 1 || j == 2 || j == 4 || j == 5)) ||
                (i == 4 && (j == 1 || j == 5)))

            {
                printf("   ");
                continue;
            }
            printf(" * ");
        }
        printf("\n");
    }
    
}
