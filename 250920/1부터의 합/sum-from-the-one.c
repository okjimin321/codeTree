#include <stdio.h>

int main() {
    // Please write your code here.

    int N;
    scanf("%d", &N);

    int sum = 0;
    for(int i = 1; i <= 100; i++){
        sum += i;
        if(sum >= N){
            printf("%d", i);
            break;
        }

    }

    return 0;
}