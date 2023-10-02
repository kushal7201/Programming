#include <stdio.h>
#include <stdlib.h>

int main()
{
    FILE *fp;
    fp = fopen("Task.txt", "w"); // Creates a file named "Task.txt"
    if (fp == NULL)
    {
        printf("Cannot open file to write!\n");
        exit(0);
    }
    fprintf(fp, "Introduction To Programming");
    return 0;
}