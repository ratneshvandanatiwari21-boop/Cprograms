/*Accept an employee's basic salary. Calculate:
HRA = 20%, DA = 40%, then display the Gross Salary = Basic + HRA + DA.*/

#include<stdio.h>
int main(){
    float salary;
    printf("Enter the Basic Salary: ");
    scanf("%f",&salary);

    float hra= salary*20/100;
    float da=salary*40/100;

    float gross_salary = salary+hra+da;

    printf("Total salary is Rs%.2f\\-",gross_salary);
    return 0;

}