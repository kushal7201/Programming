#include <stdio.h>
#include <limits.h>
#include <float.h>
#include <string.h>

int main()
{
    char s[25];
    printf("Enter the data type as \nint/char/unsigned int/unsigned char/float/double/long/long long: ");
    scanf("%[^\n]%*c", s);
    if (strcmp(s, "int") == 0)
        printf("%d to %d\n", INT_MIN, INT_MAX);
    else if (strcmp(s, "unsigned int") == 0)
        printf("0 to %u\n", UINT_MAX);
    else if (strcmp(s, "char") == 0)
        printf("%d to %d\n", CHAR_MIN, CHAR_MAX);
    else if (strcmp(s, "unsigned char") == 0)
        printf("0 to %u\n", UCHAR_MAX);
    else if (strcmp(s, "float") == 0)
        printf("%e to %e\n", -FLT_MAX, FLT_MAX);
    else if (strcmp(s, "double") == 0)
        printf("%e to %e\n", -DBL_MAX, DBL_MAX);
    else if (strcmp(s, "long") == 0)
        printf("%ld to %ld\n", LONG_MIN, LONG_MAX);
    else if (strcmp(s, "long long") == 0)
        printf("%lld to %lld\n", LLONG_MIN, LLONG_MAX);
    else
        printf("Invalid data type input\n");
    return 0;
}