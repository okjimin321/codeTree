#include <stdio.h>

int main() {
    // Please write your code here.
    int n; 
    scanf("%d", &n);

    int cnt = 1;
    for(int i = 1; i <= n; i++){
        for(int j = 1; j <= i; j++){
            printf("%d ", cnt++);
        }
        printf("\n");
    }
    return 0;
}