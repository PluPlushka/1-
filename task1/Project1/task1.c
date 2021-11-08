#include <stdio.h>

#include <math.h>


void main(void)
{
    double x = 16.5;
    printf("x = %.4lf\n", x);
    double f;
    f = (pow(x, 2)+2*x-3+(x+1)*sqrt(pow(x, 2)-9))/ (pow(x, 2) - 2 * x - 3 + (x - 1) * sqrt(pow(x, 2) - 9));

    printf("f = %.4lf\n", f);

    printf("x = ");
    scanf_s("%lf", &x);


    f = (pow(x, 2) + 2 * x - 3 + (x + 1) * sqrt(pow(x, 2) - 9)) / (pow(x, 2) - 2 * x - 3 + (x - 1) * sqrt(pow(x, 2) - 9));
    printf("f = %.4lf\n", f);
}