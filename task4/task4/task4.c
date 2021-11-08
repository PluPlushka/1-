#include <stdio.h>
#include <math.h>



double x, result;
void F(void);

void main(void)
{

    printf("vvedite x \n");
    scanf_s("%lf", &x);
    printf("x = %.4lf\n", x);
    F();
    printf("result = %.4lf\n", result);
}

void F(void)
{
    result = (pow(x, 2) + 2 * x - 3 + (x + 1) * sqrt(pow(x, 2) - 9)) / ((pow(x, 2) - 2 * x - 3 + (x - 1) * sqrt(pow(x, 2) - 9)));
}