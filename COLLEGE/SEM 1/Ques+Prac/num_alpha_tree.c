#include<stdio.h>
int main()
{
    int num = 6, y = 1;
    char x = 65;
    for (int i = 1; i <= num; i++)
    {
        for (int j = 0; j < num - i + 1; j += 1)
        {
            printf(" ");
        }
        for (int j = 0; j < i; j++)
        {
            printf("%d ", y);
            y++;
        }
        printf("\n");
        i++;
        for (int j = 0; j < num - i + 1; j += 1)
        {
            printf(" ");
        }
        for (int j = 1; j <= i; j++)
        {
            printf("%c ", x);
            x++;
            if (x == 91)
                break;
        }
        printf("\n");
    }
    return 0;
}


/*

1
2 3
4 5 6
7 8 9 10
    A
   B C
  D E F
 G H I J
K L M N O

     1
    A B
   2 3 4
  C D E F
 5 6 7 8 9
G H I J K L

*/