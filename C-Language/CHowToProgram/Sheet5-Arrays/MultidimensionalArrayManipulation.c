#include <stdio.h>
#define STUDENTS    3
#define EXAMS   4

int minimum (int data[][EXAMS]);
int maximum (int data[][EXAMS]);
double average (int data[][EXAMS], int);

void main(void)
{
    int studentGrades[STUDENTS][EXAMS] =
    { { 77, 68, 86, 73 },
    { 96, 87, 89, 78 },
    { 70, 90, 86, 81 } };

    printf("minimum grade is %d\n", minimum(studentGrades));
    printf("maximum grade is %d\n", maximum(studentGrades));
    printf("average grade for student:1 is %lf\n", average(studentGrades, 1));
    printf("average grade for student:2 is %lf\n", average(studentGrades, 2));
    printf("average grade for student:3 is %lf\n", average(studentGrades, 3));


}

int minimum(int data [][EXAMS])
{
    int m = 100;
    for (size_t i = 0; i < STUDENTS; ++i)
        for (size_t j = 0; j < EXAMS; ++j)
            if (data[i][j] < m)
                m = data[i][j];
    return m;
}

int maximum (int data[][EXAMS])
{
    int M = -1;
    for (size_t i = 0; i < STUDENTS; ++i)
        for (size_t j = 0; j < EXAMS; ++j)
            if (data[i][j] > M)
                M = data[i][j];
    return M;
}

double average (int data[][EXAMS], int num)
{
    int total = 0;

    for (size_t i = num - 1; i < num; ++i)
        for (size_t j = 0; j < EXAMS; ++j)
            total += data[i][j];
}

    return (total / (EXAMS));
}

