#include <stdio.h>

#define SIZE 4

int main() {
    // Please write your code here.
    
    int arr[SIZE][SIZE];
    for(int i = 0; i < SIZE; i++){
        for(int j = 0; j < SIZE; j++){
            scanf("%d", &arr[i][j]);
        }
    }

    int sum = 0;
    for(int i = 0; i < SIZE; i++){
        for(int j = 0; j <= i; j++){
            sum += arr[i][j];
        }
    }

    printf("%d ", sum);
    return 0;
}