//Write a C program that uses a single function to calculate the Total, Average, and Percentage of marks
//obtained in three subjects.

#include<stdio.h>
void calculate(float m1, float m2, float m3,float *total, float *average, float *percentage){
    *total=m1+m2+m3;
    *average=*total/3;
    *percentage=(*total / 300) * 100;


}


int main(){
    float n1,n2,n3;
    float total, average, percentage;
    printf("Enter the Marks: \n");
    scanf("%f%f%f",&n1,&n2,&n3);
    calculate(n1,n2,n3,&total, &average, &percentage);

    printf("\nTotal = %.2f", total);
    printf("\nAverage = %.2f", average);
    printf("\nPercentage = %.2f%%", percentage);

    return 0;
}
