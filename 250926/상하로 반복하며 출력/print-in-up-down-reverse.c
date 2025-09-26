#include<stdio.h>

//훨씬 좋은 풀이 생각하
int main(void){

    int n;
    scanf("%d", &n);

    for(int i = 0; i < n; i++){
        for(int j = 0; j < n; j++){
            if((j + 1) % 2 != 0)
                printf("%d", i + 1);
            else
                printf("%d", (n - i));
        }
        printf("\n");
    }
    return 0;
}