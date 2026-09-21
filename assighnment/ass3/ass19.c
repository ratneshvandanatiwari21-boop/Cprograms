//Print Mobile Keypad Layout Using Nested Loops
#include<stdio.h>
int main(){
    for (int i = 0; i < 4; i++)
    {
        for (int j =0 ; j < 3; j++)
        {
            printf("+-----");
        }
        printf("+\n");
        for (int j = 0; j < 3; j++) {

            printf("|  ");

            if (i < 3) {
                printf("%d", i * 3 + j + 1);
            }
            else {
                if (j == 0)
                    printf("*");
                else if (j == 1)
                    printf("0");
                else
                    printf("#");
            }

            printf("  ");
        }
        printf("|\n");
    }
    for (int j = 0; j < 3; j++) {
        printf("+-----");
    }
    printf("+\n");
    return 0;  
}
