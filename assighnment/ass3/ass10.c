//Calculate Mean (Average) of Numbers Using Loop
#include<stdio.h>
int main(){
    int n, num;
    printf("Enter the number of Terms: ");
    scanf("%d",&n);
    float sum=0,mean;
    for (int i = 1; i <= n; i++) {
        printf("Enter number %d: ", i);
        scanf("%d",&num);
        sum+=num;
    }
    mean = sum/n;
    printf("Mean of the numbers is %.2f",mean);
}