#include<stdio.h>
int main()
{
    char ch, string[25], sen[100];
    printf("Enter a character: ");
    scanf("%c", &ch);
    printf("Enter a string: ");
    scanf("%s", string);
    printf("Enter a sentence: ");
    scanf("\n");
    scanf("%[^\n]%*c", sen);
    printf("Entered character: %c\n", ch);
    printf("Entered string: %s\n", string);
    printf("Entered sentence: %s", sen);
    return 0;
}
