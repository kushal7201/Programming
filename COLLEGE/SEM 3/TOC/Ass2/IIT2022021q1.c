#include <stdio.h>
#include <string.h>
#include <malloc.h>
#include <stdlib.h>

// Since DFA is type of NFA, I have constructed the DFA for the given language.
int main()
{
    char str[100];
    printf("Enter the string: ");
    scanf("%s", str); 
    int current = 0;
    for (int i = 0; i < strlen(str); i++)
    {
        if (current == 0 && str[i] == 'a')
            current = 1;
        else if (current == 1 && str[i] == 'b')
            current = 2;
        else if (current == 2 && str[i] == 'a')
            current = 3;
        else if (current == 3 && str[i] == 'b')
            current = 2;
        else if (current == 3 && str[i] == 'a')
            current = 1;
        else
        {
            printf("The string is Rejected\n"); 
            exit(0);
        }
    }
    
    if (current == 3)
        printf("The string is Accepted\n");
    else
        printf("The string is Rejected\n");

    return 0;
}
