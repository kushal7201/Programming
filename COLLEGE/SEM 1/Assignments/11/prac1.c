#include<stdio.h>

int main()
{
    FILE *file;
    file = fopen("hagd.txt", "r");
    char line[1000];
    while(fgets(line, 1000, file))
    {
        printf("%s",line);
    }
}