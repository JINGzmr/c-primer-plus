#include <stdio.h>
double fun(double x, double y);
int main(void)
{
    double a, b;

    while (scanf("%lf %lf",&a,&b) == 2)
    {
        printf("调和平均数%g\n",fun(a, b));
    }

    return 0;
}

double fun(double x, double y)
{
    return 2/(1/x+1/y);
}
