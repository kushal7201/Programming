#include <stdio.h>

void findstamp(int arr[], int num, int V){
    for(int i = 0; i<num; i++){
        V/arr[i];
        int remainder = V%arr[i];
    
    findstamp(arr, num, remainder);
    }
}

int main() {
    int L[] = {4, 3, 5};
    int n = sizeof(L) / sizeof(L[0]);
    int V = 13;


    return 0;
}
