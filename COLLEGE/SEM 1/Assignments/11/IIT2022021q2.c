#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{
    if (argc != 2)
    {
        printf("Usage: %s <filename>\n", argv[0]);
        return 0;
    }

    char *filename = argv[1];
    FILE *file = fopen(filename, "w");
    if (file == NULL)
    {
        printf("Cannot open file to write!\n");
        exit(0);
    }
    char input[1000];
    int i = 0;
    while (i < 4 && fgets(input, sizeof(input), stdin))
    {
        fprintf(file, "%s", input);
        i++;
    }

    fclose(file);
    return 0;
}