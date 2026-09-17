/*Write a program to display a student's result based on the selected subject and obtained marks.
Display the following menu:*/

#include<stdio.h>
int main(){
    int code, marks;
    printf("1. Mathematics\n2. Science\n3. English\nEnter the Subject code: \n");
    scanf("%d",&code);
    printf("Enter the Marks: ");
    scanf("%d",&marks);

    switch (code)
    {
    case 1:{
        if (marks<=100 && marks>=75)
            printf("Subject  : Mathematics\nGrade    : A\nResult   : Pass");
        else if (marks<=74 && marks>=60)
            printf("Subject  : Mathematics\nGrade    : B\nResult   : Pass");
        else if (marks<=59 && marks>=45)
            printf("Subject  : Mathematics\nGrade    : C\nResult   : Pass");
        else if (marks<=44 && marks>=0)
            printf("Subject  : Mathematics\nGrade    : D\nResult   : Fail");
        else
            printf("Enter correct marks!");
        break;
    }
    case 2:{
        if (marks<=100 && marks>=75)
            printf("Subject  : Science\nGrade    : A\nResult   : Pass");
        else if (marks<=74 && marks>=60)
            printf("Subject  : Science\nGrade    : B\nResult   : Pass");
        else if (marks<=59 && marks>=45)
            printf("Subject  : Science\nGrade    : C\nResult   : Pass");
        else if (marks<=44 && marks>=0)
            printf("Subject  : Science\nGrade    : D\nResult   : Fail");
        else
            printf("Enter correct marks!");
        break;
    }
    case 3:{
        if (marks<=100 && marks>=75)
            printf("Subject  : English\nGrade    : A\nResult   : Pass");
        else if (marks<=74 && marks>=60)
            printf("Subject  : English\nGrade    : B\nResult   : Pass");
        else if (marks<=59 && marks>=45)
            printf("Subject  : English\nGrade    : C\nResult   : Pass");
        else if (marks<=44 && marks>=0)
            printf("Subject  : English\nGrade    : D\nResult   : Fail");
        else
            printf("Enter correct marks!");
        break;
    }
    default:
        printf("Enter Vaild Input");
        break;
    }
    return 0;
}