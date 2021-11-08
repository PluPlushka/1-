#include <stdio.h>

#include <math.h>


double F(double x)
{
    return  (pow(x, 2) + 2 * x - 3 + (x + 1) * sqrt(pow(x, 2) - 9)) / ((pow(x, 2) - 2 * x - 3 + (x - 1) * sqrt(pow(x, 2) - 9)));
}

void main(void)
{

    printf("vvedite x \n");
    double y, x;
    scanf_s("%lf", &x);
    printf("x = %.4lf\n", x);
    y = F(x);
    printf("y = %.4lf\n", y);
}