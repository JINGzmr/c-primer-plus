#include <stdio.h>
#define N 3
#define M 5
void show(int (*a)[M], int n);
void larger(int (*a)[M], int n);

int main(void)
{
    int a[N][M] =
    {
        {1, 2, 3, 4, 5},{6, 7, 8, 9, 10},{11, 12, 13, 14, 15}
    };

    show(a, N);
    larger(a, N);
    printf("最终数组是：\n");
    show(a, N);

    return 0;
}

void show(int (*a)[M], int n)
{
    int i,j;
    for (i = 0; i < n; i++){
        for (j = 0; j < M; j++){
            printf("%4d", a[i][j]);
        }
        printf("\n");//putchar('\n');
    }
}

void larger(int (*a)[M], int n)
{
    int i,j;
    for (i = 0; i < n; i++){
        for (j = 0; j < M; j++){
            a[i][j]*= 2;
        }
    }
}
