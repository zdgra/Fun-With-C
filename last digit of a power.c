/*Zach Abueg
 *This program calculates the last digit of a (positive) power
 *1/27/18
 */

//pre-processor directives
#include <stdio.h>
#include <math.h>

//main function
int main() {

    //declare + initialize variables
    int a, b, c, d, e, f;

    //ask user for input
    printf("What's the power? Input the base and then the exponent, separated by a comma: base, exponent.\n");
    scanf("%d, %d", &a, &b);

    //assignment statement
    c = a % 10;                 //last digit of the base
    d = b % 4;                  //exponent mod 4
    e = ((int) pow(c,4)) % 10;  //last digit of (the last digit of the base raised to 4) ex. 12^4 mod 10 = 2^4 mod 10 = 6
    f = ((int) pow(c,d)) % 10;  //ex. 2^33 mod 10 = 2^3 mod 10 = 8

    //switch statement
    switch (c) {

    case 0:
        printf("\nThe last digit of %d^%d is 0.\n", a, b);
        break;

    case 1:
        printf("\nThe last digit of %d^%d is 1.\n", a, b);
        break;

    case 2:
        if (d == 0)
            printf("\nThe last digit of %d^%d is %d.\n", a, b, e);
        else
            printf("\nThe last digit of %d^%d is %d.\n", a, b, f);
        break;

    case 3:
        if (d == 0)
            printf("\nThe last digit of %d^%d is %d.\n", a, b, e);
        else
            printf("\nThe last digit of %d^%d is %d.\n", a, b, f);
        break;

    case 4:
        if (d == 0)
            printf("\nThe last digit of %d^%d is %d.\n", a, b, e);
        else
            printf("\nThe last digit of %d^%d is %d.\n", a, b, f);
        break;

    case 5:
        if (d == 0)
            printf("\nThe last digit of %d^%d is %d.\n", a, b, e);
        else
            printf("\nThe last digit of %d^%d is %d.\n", a, b, f);
        break;

    case 6:
        if (d == 0)
            printf("\nThe last digit of %d^%d is %d.\n", a, b, e);
        else
            printf("\nThe last digit of %d^%d is %d.\n", a, b, f);
        break;

    case 7:
        if (d == 0)
            printf("\nThe last digit of %d^%d is %d.\n", a, b, e);
        else
            printf("\nThe last digit of %d^%d is %d.\n", a, b, f);
        break;

    case 8:
        if (d == 0)
            printf("\nThe last digit of %d^%d is %d.\n", a, b, e);
        else
            printf("\nThe last digit of %d^%d is %d.\n", a, b, f);
        break;

    case 9:
        if (d == 0)
            printf("\nThe last digit of %d^%d is %d.\n", a, b, e);
        else
            printf("\nThe last digit of %d^%d is %d.\n", a, b, f);
        break;
    }

    return 0;
}
