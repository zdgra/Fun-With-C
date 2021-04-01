/*Zach Abueg
 *This program completes the square for a quadratic with leading coefficient 1
 *1/19/18
 */

//pre-processor directives
#include <stdio.h>
#include <math.h>

//main function
int main() {

    //declare + initialize variables
    int b, c;
    float a, d;

    //print a briefing for the user
    printf("Hello! I can complete the square for any quadratic of the form x^2 + bx + c.\n\n");

    //ask the user for input
    printf("What's the value of b?\n");
    scanf("%d", &b);

    printf("\nWhat's the value of c?\n");
    scanf("%d", &c);

    //assignment statement
    a = (float) b / 2;
    d = (float) c - pow(a,2);

    //print result
    printf("\nYour quadratic x^2 + %d + %d = (x + %.2f)^2 + %.2f.\n", b, c, a, d);

    //end main function
    return 0;
}
