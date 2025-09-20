#include <stdio.h>

int main() {
    // Please write your code here.

    const int size = 10;
    int arr[size];
    scanf("%d %d", &arr[0], &arr[1]);

    for(int i = 2; i < size; i++){
        arr[i] = (arr[i - 1] + arr[i - 2]) % 10;
    }

    for(int i = 0; i < size; i++){
        printf("%d ", arr[i]);
    }
    return 0;
}