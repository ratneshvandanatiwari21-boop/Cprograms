/*Accept marks of five subjects. Calculate total marks, average, and percentage*/
#include<stdio.h>
int main(){
    int maths,phy,chem,bio,eng;
    printf("Enter the Marks: ");
    scanf("%d %d %d %d %d",&maths,&phy,&chem,&bio,&eng);

    int total_marks=maths+phy+chem+bio+eng;
    float avg=(float)total_marks/5;
    float percentage=(float)total_marks/500*100;

    printf("Total marks of 5 subjects is %d\n",total_marks);
    printf("The Average marks of 5 subject is %.2f\n",avg);
    printf("The Percentage is %.2f%%",percentage);

    return 0;

}