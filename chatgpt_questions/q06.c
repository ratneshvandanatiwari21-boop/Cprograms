/*Accept total number of days and convert them into years, weeks, and remaining days. 
Assume 1 year = 365 days*/

#include<stdio.h>
int main(){
    int num;
    printf("Enter the Number of Days: ");
    scanf("%d",&num);
    int res=num/365;
    int res1=num%365;
    int res2=res1/7;
    int res3=res1%7;

    printf("In %d days there are %d year %d weeks %d days",num,res,res2,res3);

    return 0;
}