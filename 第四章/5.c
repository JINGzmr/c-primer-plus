#include<stdio.h>
#include<string.h>
int main(void)
{
    printf("please enter :");
    char a[100],b[100];
    scanf("%s %s",a,b);
    int x=strlen(a);
    int y=strlen(b);
    printf("%s %s\n",a,b);
    printf("%*d %*d\n",x,x,y,y);//尾
    printf("%-*d %-*d\n",x,x,y,y);//首

    // int i;              //尾
    // for(i=1;i<x;i++){
    //     printf(" ");
    // }
    // printf("%d",x);
    // for(i=0;i<y;i++){
    //     printf(" ");
    // }
    // printf("%d\n",y);

    return 0;
}
