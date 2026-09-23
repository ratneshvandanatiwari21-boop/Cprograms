#include<stdio.h> 
void calculate(float m1, float m2, float m3,float m4 ,float *total, float *average,char *grade){
    *total=m1+m2+m3+m4;
    *average=*total/4;
    if (*average>=75)
        *grade = 'A';
    else if (*average<75 && *average>=60)
        *grade ='B';
    else if (*average<60 && *average>=50)
        *grade ='C';
    else
        *grade='F';
    
}


int main(){
    float n1,n2,n3,n4;
    float total, average;
    char grade;
    printf("Enter the Marks: \n");
    scanf("%f%f%f%f",&n1,&n2,&n3,&n4);
    calculate(n1,n2,n3,n4,&total, &average,&grade);

    printf("\nTotal = %.2f", total);
    printf("\nAverage = %.2f", average);
    printf("\nGrade = %c", grade);

    return 0;
}