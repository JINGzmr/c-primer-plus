#include <stdio.h>
#include<string.h>
#define LEN 255

int main(void)
{
    int i = 0;
    char input[LEN];
    
//法一：
    // gets(input);
    // int n=strlen(input);
    // for(i=n-1;i>=0;i--){
    //     printf("%c",input[i]);
    // }

//法二：
    printf("Please enter a string:\n");
    do{
        scanf("%c", &input[i]);
    } while (input[i] != '\n' && ++i && i < LEN);// 每次读入一个字符
    
    printf("Reversing print the string is:\n");
    for (i--; i >= 0; i--)
    {
        //↑避免打印换行符;
        printf("%c", input[i]);
    }
    printf("\nDone.\n");

    return 0;
}
