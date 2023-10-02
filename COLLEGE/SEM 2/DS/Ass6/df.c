#include <stdio.h>
#include <malloc.h>

typedef struct {
    int a1, a2, a3;
    int value;
} triplet;

int main() {
    FILE* fp = fopen("output.txt", "w");
    triplet* sets;
    int count = 0;
    sets = (triplet*)malloc(sizeof(triplet));

    for (int i = 1; i <= 20; i++) {
        for (int j = i; j <= 20; j++) {
            for (int k = j; k <= 20; k++) {
                count++;
                triplet temp;
                temp.a1 = i;
                temp.a2 = j;
                temp.a3 = k;
                temp.value = i * i + j * j + k * k;
                sets = realloc(sets, count * sizeof(triplet));
                sets[count - 1] = temp;
            }
        }
    }

    int answer = 0;
    for (int i = 0; i < count; i++) {
        for (int j = 0; j < count; j++) {
            if (sets[i].value == sets[j].value && sets[i].a1 <= sets[j].a1) {
                printf("(%d,%d,%d,%d,%d,%d)\n", sets[i].a1, sets[i].a2, sets[i].a3, sets[j].a1, sets[j].a2, sets[j].a3);
                fprintf(fp, "(%d,%d,%d,%d,%d,%d)\n", sets[i].a1, sets[i].a2, sets[i].a3, sets[j].a1, sets[j].a2, sets[j].a3);
                answer++;
            }
        }
    }

    printf("The no. of pairs: %d\n", answer);
    fprintf(fp, "The no. of pairs: %d\n", answer);
    fclose(fp);

    printf("Hello World!\n");

    return 0;
}
