//char and its ASCII value
#include<stdio.h>
int main(){
    char ch1='A' , ch2='Z';
    char ch3='a' , ch4='z';
    char ch5='\n';
    char ch6='0' ,ch7='9';
    printf("ASCII value of A to Z is %d to %d\n",ch1,ch2);
    printf("ASCII value of A to Z is %d to %d\n",'A','Z');
    printf("ASCII value of a to z is %d to %d\n",ch3,ch4);
    printf("ASCII value of a to z is %d to %d\n",'a','z');
    printf("ASCII value of 0 to 9 is %d to %d\n",ch6,ch7);
    printf("ASCII value of \\n is %d\n",ch5);
    printf("ASCII value of \\n is %d\n",'\n');
}