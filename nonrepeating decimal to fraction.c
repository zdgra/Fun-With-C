/*Zach Abueg
 *This program converts a nonrepeating decimal (up to 17 decimal digits) into a fraction
 *1/20/18
 */

//pre-processor directives
#include <stdio.h>
#include <math.h>

//main function
int main() {

    //declare + initialize variables
    double a;
    int b, c, d;

    //ask the user for input
    printf("Input the nonrepeating decimal (up to 17 digits).\n");
    scanf("%lf", &a);

    printf("\nHow many digits are behind the decimal?\n");
    scanf("%d", &b);

    //assignment statement
    c = pow(10, b);
    d = a * c;

    //print result
    printf("\nYour nonrepeating decimal converts to %d/%d.\n", d, c);

    //end main function
    return 0;
}
