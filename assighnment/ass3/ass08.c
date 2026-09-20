//Count Prime and Non-Prime Numbers in a Given Range
#include <stdio.h>
int main(){
    int num;
    printf("Enter the Number: ");
    scanf("%d",&num);
    int prime_count = 0;
    int non_prime_count = 0;

    for (int i = 2; i <= num; i++) {

        int count = 0;

        for (int j = 1; j <= i; j++) {

            if (i % j == 0) {
                count++;
            }
        }if (count == 2) {
            prime_count++;
        }
        else {
            non_prime_count++;
        }
    printf("Non Prime Count= %d\n",non_prime_count);
    printf("Prime Count= %d\n",prime_count);
    }
    
}