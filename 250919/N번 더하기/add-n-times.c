#include <stdio.h>

int main() {
    // Please write your code here.
    int a, N;

    scanf("%d %d", &a, &N);

    for(int i = 0; i < N; i++){
        printf("%d \n", a += N);

    }

    return 0;
}