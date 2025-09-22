#include<stdio.h>

int main(void){

    int n;
    scanf("%d", &n);

    int arr[n][n];
    int cnt = 1;
    for(int i = 0; i < n; i++){
        if((i + 1) % 2 != 0)
            for(int j = 0; j < n; j++){
                arr[j][i] = cnt++;
            }
        else
            for(int j = 0; j < n; j++){
                arr[j][i] = --cnt;
            }
    }

    for(int i = 0; i < n; i++){
        for(int j = 0; j < n; j++){
            printf("%d", arr[i][j]);
        }
        printf("\n");
    }
    return 0;
}