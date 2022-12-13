#include <stdio.h>
static int count = 0;
int cnt(void);
int main(void)
{
    int i,j,k;
    scanf("%d", &i);
    for (j=1;j<=i;j++){
        printf("count = %d\n", cnt());
    }
    printf("函数被调用的次数为：%d\n", count);

    return 0;
}

int cnt(void)
{
    return count+=1;
}
