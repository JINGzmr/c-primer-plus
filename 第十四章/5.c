#include <stdio.h>
#include <string.h>
#define N 15
#define CSIZE 4
#define SCORES 3
struct name
{
    char fname[N];
    char lname[N];
};
struct student
{
    struct name ma;
    float grade[SCORES];
    float aver;
};
void set_students(struct student ar[], int n);
void find_averages(struct student ar[], int n);
void show_messages(const struct student ar[], int n);
void show_averages(const struct student ar[], int n);
int main(void)
{
    struct student classes[CSIZE] =
    {
        {"a","b"},{"c","d"},{"e","f"},{"g","h"}
    };
    set_students(classes, CSIZE);
    find_averages(classes, CSIZE);
    show_messages(classes, CSIZE);
    show_averages(classes, CSIZE);
    return 0;
}

void set_students(struct student ar[], int n)
{
    int i,j;
    for (i=0; i<n; i++){
        printf("enter three scores for %s %s:\n", ar[i].ma.fname, ar[i].ma.lname);
        for (j = 0; j < SCORES; j++){
            while (scanf("%f", &ar[i].grade[j]) != 1){
                while (getchar() != '\n')continue;
                printf("enter a number: ");
            }
        }
    }
}

void find_averages(struct student ar[], int n)
{
    int i, j;
    float sum;
    for (i=0; i<n; i++){
        for (j = 0, sum = 0.0f; j < SCORES; j++){
            sum += ar[i].grade[j];
        }
        ar[i].aver = sum / SCORES;
    }
}

void show_messages(const struct student ar[], int n)
{
    int i, j;
    for (i=0; i<n; i++){
        printf("\n%s %s's three scores: ", ar[i].ma.fname, ar[i].ma.lname);
        for (j = 0; j < SCORES; j++){
            printf("%g ", ar[i].grade[j]);
        }
        printf("\nAverage: %g\n", ar[i].aver);
    }
}

void show_averages(const struct student ar[], int n)
{
    int i;
    float total;
    for (i = 0, total = 0.0f; i < n; i++){
        total += ar[i].aver;
    }
    printf("\nClass average: %g\n", total / n);
}
