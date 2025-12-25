#include <stdio.h>
#include <math.h>
int main() {
    int num = 1234;
    int digits = (int)log10(num) ;
     printf("%d\n", digits);
    int divisor = (int)pow(10, digits);
    printf("%d\n", divisor);
    int first_digit = num / divisor;
    printf("%d\n", first_digit);
    int shifted = (num % divisor) * 10 + first_digit;
    printf("Left-shifted: %d\n", shifted);
    return 0;
}