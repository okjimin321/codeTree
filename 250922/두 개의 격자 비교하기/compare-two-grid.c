#include <stdio.h>

void intputArr(int n, int m, int arr[n][m]){
    for(int i = 0; i < n; i++){
        for(int j = 0; j < m; j++){
            scanf("%d", &arr[i][j]);
        }
    }
}
int main() {
    // Please write your code here.
    int n, m;
    scanf("%d %d", &n, &m);

    int arr1[n][m];
    int arr2[n][m];
    
    intputArr(n, m, arr1);
    intputArr(n, m, arr2);

    for(int i = 0; i < n; i++){
        for(int j = 0; j < m; j++){
            if(arr1[i][j] == arr2[i][j]){
                printf("01 ");
                continue;
            }
           
            printf("1 ");
        }
        printf("\n");
    }
    return 0;
}