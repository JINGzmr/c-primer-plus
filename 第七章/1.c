#include<stdio.h>
int main()
{
    char a;
    int kong=0,n=0,oth=0;
    do{
        // scanf("%c",&a);
        a=getchar();
        if(a==' ')kong++;
        else if(a=='\n')n++;
        else if(a!='#')oth++;

    }while(a!='#');

    printf("空格：%d个\n",kong);
    printf("换行符：%d个\n",n);
    printf("其他字符：%d个\n",oth);

    return 0;
}