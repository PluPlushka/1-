#include <stdio.h>
#include <math.h>


double x, result;
void F(void);

void F(void)
{
    result = (pow(x, 2) + 2 * x - 3 + (x + 1) * sqrt(pow(x, 2) - 9)) / ((pow(x, 2) - 2 * x - 3 + (x - 1) * sqrt(pow(x, 2) - 9)));
}