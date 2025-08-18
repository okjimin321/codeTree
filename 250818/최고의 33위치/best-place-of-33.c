#include <stdio.h>

int grid[20][20];
int n;

int count_coins(int x, int y);

int main() {
    scanf("%d", &n);
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            scanf("%d", &grid[i][j]);
        }
    }

    
    int max_coins = 0;
    n = n > 3 ? n - 3: n;
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            int coins = count_coins(i,j);
            if(max_coins <= coins)
                max_coins = coins;
        }   
    }

    printf("%d \n", max_coins);
    
    return 0;
}

int count_coins(int x, int y){
    int coins = 0;
    for(int i = x; i < x + 3; i++){
        for(int j = y; j < y + 3; j++){
            coins += grid[i][j];
        }
    }
    return coins;
}