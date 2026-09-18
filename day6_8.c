// for loop valid syntaxes
#include<stdio.h>
int main(){
    for(int i =1; i<=5; i++){   // 1st way of writing the for loop
        // instructions
    }

    int i =1;
    for(; i<=5; i++){  // 2nd way of writing the for loop
        //instructions
    }

    int i = 1;
    for(;i<=5;){     // 3rd way of writing the for loop
        //instruction
        i++;
    }

    int i = 1;
    for(; ;){
        //instruction  // Infinite loop
    }
    return 0;
}