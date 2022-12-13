#include <stdio.h>
double min(double x, double y);
int main(void)
{
    double a, b;
    while (scanf("%lf %lf", &a, &b) == 2)
    {
        printf("较小值为%f\n", min(a, b));
    }

    return 0;
}

double min(double x, double y)
{
    return x < y ? x : y;
}
