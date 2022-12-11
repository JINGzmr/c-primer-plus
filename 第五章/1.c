#include<stdio.h>
#define t 60
int main()
{
    int x;
    scanf("%d",&x);
    while(x>0){
        printf("%d小时 %d分钟",x/t,x%t);
        scanf("%d",&x);
    }


    return 0;
}