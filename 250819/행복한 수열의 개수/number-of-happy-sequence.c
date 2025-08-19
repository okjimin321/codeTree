#include <stdio.h>

int n, m;
int grid[101][101];
int checker[100];

int main(){
    scanf("%d %d", &n, &m);
    for (int i = 0; i < n; i++){
        for (int j = 0; j < n; j++){
            scanf("%d", &grid[i][j]);
        }
    }

    int happy_count = 0;

    //check row
    for(int i = 0; i < n; i++){
        for(int j = 0; j < n; j++){
            checker[grid[i][j]]++;
        }

        for(int j = 0; j < 100; j++){
            if(checker[j] >= m)
                //happy_count++;
        }

        for(int j = 0; j < 100; j++){
            checker[j] = 0;
        }
    }

    //check column
    for(int i = 0; i < n; i++){
        for(int j = 0; j < n; j++){
            checker[grid[j][i]]++;
        }

        for(int j = 0; j < 100; j++){
            if(checker[j] >= m)
                happy_count++;
        }

        for(int j = 0; j < 100; j++)
            checker[j] = 0;
        
    }

    printf("%d \n", happy_count);

    return 0;
}