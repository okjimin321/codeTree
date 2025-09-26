#include <stdio.h>
#include <stdlib.h>

#define MAX_N 1000

int sequence[MAX_N];

int main() {
    int n;
    scanf("%d", &n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &sequence[i]);
    }
    
    // Please write your code here.
    int* result = malloc(sizeof(int) * n);
    for(int i= 0; i < n; i++){
        int min_num = sequence[0];
        int idx = 0;

        for(int j  = 1; j < n; j++){
            if(min_num > sequence[j]){
                min_num = sequence[j];
                idx = j;
            }
        }
        sequence[idx] = 10000000000;
        result[idx] = i + 1;
    }

    for(int i = 0; i < n; i++){
        printf("%d ", result[i]);
    }
    return 0;
}