#include <stdio.h>

int avg(int[], int, int);

int main()
{
    int marks[5] = {10, 20, 30, 40, 50}, size, average;
    size = sizeof(marks) / sizeof(marks[0]);
    average = avg(marks, size, size);
    printf("average = %d\n", average);
    printf("Inside main size of array is %lu\n", sizeof(marks));
    return 0;
}

int avg(int marks1[], int a, int size)
{
    int i, sum = 0, average;

    for(i = 0; i < a; i++)
    {
        sum = sum + marks1[i];
    }
    average = sum/a;
    printf("inside avg function size of array is %d\n", size);
    return average;
}

