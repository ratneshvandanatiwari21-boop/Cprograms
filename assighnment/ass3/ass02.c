//convert number into binary
#include <stdio.h>

int main() {
    long long n, bin = 0, p = 1;
    printf("Enter the Number: ");
    scanf("%lld", &n);

    while (n > 0) {
        bin += (n % 2) * p;
        n /= 2;
        p *= 10;
    }

    printf("%lld", bin);

    return 0;
}
