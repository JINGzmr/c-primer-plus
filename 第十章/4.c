#include <stdio.h>
#define N 6
double max1(const double a[], int n);
int main(void)
{
    int t;
    double a[N] = {1,2,9,8.88,27.98,0.00};
    t=max1(a, N);
    printf("最大的数的下标是%d\n", t);

    return 0;
}

double max1(const double a[], int n)
{
    int i,t;
    double max = a[0];
    for (i = 1; i < n; i++){
        if(a[i]>max) {
            // max=a[i];
            t=i;
        }
    }

    return t;
}