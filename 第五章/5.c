#include<stdio.h>
int main(void)
{
    int n,sum=0;
    scanf("%d",&n);
    int i;
    for(i=1;i<=n;i++){
        sum+=i;
    }
    printf("%d",sum);

    return 0;
}