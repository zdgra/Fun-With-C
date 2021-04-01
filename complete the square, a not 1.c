/*Zach Abueg
 *This program completes the square for a quadratic with any leading coefficient
 *1/19/18
 */

//pre-processor directives
#include <stdio.h>
#include <math.h>

//main function
int main() {

    //declare + initialize variables
    int a, b, c;
    float d, e, f, g, h, i;

    //print a briefing for user
    printf("Hello! I can complete the square for any quadratic of the form ax^2 + bx + c.\n\n");

    //ask the user for input
    printf("What's the value of a?\n");
    scanf("%d", &a);

    printf("\nWhat's the value of b?\n");
    scanf("%d", &b);

    printf("\nWhat's the value of c?\n");
    scanf("%d", &c);

    //assignment statement
    d = (float) a / a;
    e = (float) b / a;
    f = (float) c / a;
    g = (float) e / 2;
    h = (float) f - pow(g,2);
    i = (float) a * h;

    //print result
    printf("\nYour quadratic %dx^2 + %dx + %d = %d(x + %.3f)^2 + %.3f.\n", a, b, c, a, g, i);

    return 0;
}
