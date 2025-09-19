#include <stdio.h>

int main() {
    int N, M;
    scanf("%d %d", &N, &M);
    
    // Please write your code here.
    while(N){
        printf("%d \n", N);
        N /= M;
    }
    return 0;
}