#include <stdio.h>

int a[1000];

void swap(int *a, int *b) {
    int temp = *a;
    *a = *b;
    *b = temp;
}

void heap_min(int i) {
    if (i == 0)
        return;
    else {
        while (i > 0) {
            if (a[i / 2] <= a[i])
                break;
            else {
                swap(&a[i], &a[i / 2]);
            }
            i = i / 2;
        }
    }
}

int heapdel(int *n) {
    if (*n == 0)
        return -1;
    
    int min_num = a[0];
    *n = *n - 1;
    a[0] = a[*n];
    
    int i = 0;
    while (i < *n) {
        int leftin = 2 * i ;
        int rightin = 2 * i +1;
        int min_index = i;
        
        if (leftin < *n && a[leftin] < a[min_index])
            min_index = leftin;
        
        if (rightin < *n && a[rightin] < a[min_index])
            min_index = rightin;
        
        if (min_index == i)
            break;
        
        swap(&a[i], &a[min_index]);
        i = min_index;
    }
    
    return min_num;
}

int main() {
    int x;
    scanf("%d", &x);
    
    for (int i = 0; i < x; i++) {
        scanf("%d", &a[i]);
        heap_min(i);
    }
    
    for (int i = 0; i < x; i++) {
        printf("%d ", a[i]);
    }
    printf("\n");
    
    while (x > 0) {
        printf("%d\n", heapdel(&x));
    }
    
    return 0;
}