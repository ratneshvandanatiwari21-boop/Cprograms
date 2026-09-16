/*Accept distance in meters and convert it into kilometers and remaining meters.*/
#include<stdio.h>
int main(){
    int distance;
    printf("Enter the distance in meter: ");
    scanf("%d",&distance);

    int km=distance/1000;
    int mtr=distance%1000;

    printf("%dm is %dkm and %dm",distance,km,mtr);

    return 1;

}