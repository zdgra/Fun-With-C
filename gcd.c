#include <stdio.h>
#include <stdlib.h>

int gcd(int a, int b);

int gcd(int a, int b) {

    if (a % b == 0)
        return b;

    return gcd(b, a % b);
}

int main(void) {

    int a, b, c;

    printf("Find the gcd of:\n");
    scanf("%d, %d", &a, &b);

    while (a == 0 || b == 0) {
        printf("Not valid, please choose numbers greater than 0.\n");
        printf("Find the gcd of:\n");
        scanf("%d, %d", &a, &b);
    }

    c = a > b ? gcd(a, b) : gcd(b, a);

    printf("The gcd of %d and %d is %d.\n", a, b, c);

    return 0;
}
