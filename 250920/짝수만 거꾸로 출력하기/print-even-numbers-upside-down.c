#include <stdio.h>

int main() {
    // Please write your code here.

    int N;
    scanf("%d", &N);

    int arr[N];
    for(int i = 0; i < N; i++){
        scanf("%d", &arr[i]);
    }

    for(int i = N - 1; i >= 0; i--){
        if(arr[i] % 2 == 0)
            printf("%d ", arr[i]);
    }
    return 0;
}