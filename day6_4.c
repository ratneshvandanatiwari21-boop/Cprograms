// Typedef
// another name given to the predefined datatype and userdefined datatype
#include<stdio.h>
int main(){
    unsigned int num1=23;
    unsigned int num2=24;
    typedef unsigned int u_int;
    u_int num3=25;

    enum colours{red,black,blue,yellow,voilet};
    enum colours c1;
    typedef enum department{sales,HR,finance,marketing}dept;// dept is a alias
    dept d1;
    dept d2;

}