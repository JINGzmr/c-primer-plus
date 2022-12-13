#include <stdio.h>
int main(void)
{
    char a;
    int cnt=0;
    
    while((a=getchar())!=EOF)//键盘敲下ctrl+d，即可表示到文章结尾，从而退出循环
    {
        cnt++;
    }

    printf("字符数为%d\n",cnt);// ‘\n’也会被记录

    return 0;
}

