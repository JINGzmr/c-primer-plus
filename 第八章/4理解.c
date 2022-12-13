//4．编写一个程序，在遇到EOF之前，把输入作为字符流读取。该程序要报告平均每个单词的字母数。
//不要把空白统计为单词的字母。实际上,标点符号也不应该统计，但是现在暂时不同考虑这么多(如果你比较在意这点，
//考虑使用ctype.h系列中的ispunct ()函数)。
#include <stdio.h>
#include <ctype.h>
#include <stdbool.h>

int main(void)
{
    float count;
    bool inword = false;
    int ch, words, letter;
    words = letter = 0;

    printf("请您输入一些单词(遇到文件结尾结束):\n");
    while ((ch = getchar()) != EOF)
    {
        if (ispunct(ch))
        {
            continue;
        }
        if (isalpha(ch))
        {
            letter++;
        }
        if (!isspace(ch) && !inword)
        {
            inword = true;
            words++;
        }
        if (isspace(ch) && inword)
        {
            inword = false;
        }
    }
    count = (float)letter / words;
    printf("总共有%d个单词,%d个字母.\n", words, letter);
    printf("平均每个单词的字母数是%g个.\n", count);

    return 0;
}

