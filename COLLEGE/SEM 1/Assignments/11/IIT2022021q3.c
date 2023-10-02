#include <stdio.h>

void main()
{
    FILE *fp;
    char ch;
    fp = fopen("Task.txt", "r");
    int count = 1;
    while (1)
    {
        ch = fgetc(fp);
        if (ch == EOF)
            break;
        if(ch=='\n') count++;
    }
    fclose(fp);
    printf("Number of lines: %d",count);
}