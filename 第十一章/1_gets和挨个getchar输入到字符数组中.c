#include <stdio.h>
void get(char str[], int n);
int main(void)
{
    char a[10];
    get(a, 10);
    printf("Result:%s\n",a);

    return 0;
}

void get(char str[], int n)
{
    int i = 0;
    for(i=0;i<n;i++){
        str[i]=getchar();
    }
    str[i]='\0'; //当输入数目到达10时，终止输入，出结果

    // gets(str); //无法达到题目要求，当输入为‘回车’时，直接终止输入、出结果了

}
