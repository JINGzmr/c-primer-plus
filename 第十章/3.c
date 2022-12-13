#include <stdio.h>
#define N 6
int max1(const int a[], int n);
int main(void)
{
    int max;
    int array[N] = {1,2,9,8,27,0};
    max=max1(array, N);
    printf("最大的数是%d\n", max);

    return 0;
}

int max1(const int a[], int n)
{
    int i;
    int max = a[0];
    for (i = 1; i < n; i++){
        if(a[i]>max) max=a[i];
    }

    return max;
}

