#include<stdio.h>
int main(void)
{
    printf("please enter :\n");
    float a;
    char b[100]="";
    // gets(b);
    scanf("%s %f",b,&a);
    // while(getchar()!='\n');
    printf("%s,you are %.3f feet tall",b,a);

    return 0;
}

// #include<stdio.h>
 
// int main()
// {
// 	char name[20];
// 	float height;
// 	printf("请输入你的姓名和身高(厘米)：");
// 	scanf("%s %f", &name, &height);
// 	printf("%s,你的身高是：%.3f", name, height / 100);
 
// 	return 0;
// }
