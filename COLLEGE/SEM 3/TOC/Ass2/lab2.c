#include <stdio.h>
#include <stdbool.h>

#define MAX_STATES 100

struct Pair {
    int first, second;
};

struct Pair createPair(int a, int b) {
    struct Pair p;
    p.first = a;
    p.second = b;
    return p;
}

bool NFA(int adjList[MAX_STATES][26][MAX_STATES], char *s, int ptr, int final[MAX_STATES], int state) {
    if (s[ptr] == '\0')
        return state == final[0];

    for (int i = 0; i < adjList[state][s[ptr] - 'a'][0]; i++) {
        int x = adjList[state][s[ptr] - 'a'][i + 1];
        if (x == -1)
            return false;
        bool ans = NFA(adjList, s, ptr + 1, final, x);
        if (ans)
            return true;
    }
    return false;
}

int main() {
    printf("Enter transition table row and col : ");
    int row, col;
    scanf("%d %d", &row, &col);

    printf("Enter transition table\n");
    int adjList[MAX_STATES][26][MAX_STATES];
    for (int i = 0; i < row; i++) {
        for (int j = 0; j < col; j++) {
            int size;
            scanf("%d", &size);
            adjList[i][j][0] = size;
            for (int k = 0; k < size; k++) {
                scanf("%d", &adjList[i][j][k + 1]);
            }
        }
    }

    printf("Enter final states : ");
    int sfinal;
    scanf("%d", &sfinal);
    int final[sfinal];
    for (int i = 0; i < sfinal; i++) {
        scanf("%d", &final[i]);
    }

    printf("\nEnter string to check : ");
    char s[100];
    scanf("%s", s);

    int ptr = 0;
    bool ans = NFA(adjList, s, ptr, final, 0);
    if (ans)
        printf("YES, string is accepted\n");
    else
        printf("NO, string is rejected\n");

    return 0;
}