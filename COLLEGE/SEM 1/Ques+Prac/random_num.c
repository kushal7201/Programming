#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int main()
{
    srand(time(0));
    printf("%d\n", rand());           // between 0 to 32767
    printf("%d\n", rand() % 100 + 1); // between 1 to 100
    return 0;
}
