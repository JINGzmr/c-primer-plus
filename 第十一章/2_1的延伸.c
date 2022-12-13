#include <stdio.h>
#include <ctype.h>
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
        if(str[i]==' '||str[i]=='\t'||str[i]=='\n')break;
        // if (isspace(str[i]))break;  //异曲同工！！！

    }
    str[i]='\0'; 

}