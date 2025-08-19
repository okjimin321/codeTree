#include <iostream>
#include <limits.h>
using namespace std;

int n, m;
int grid[200][200];

int main() {
    cin >> n >> m;

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            cin >> grid[i][j];
        }
    }

    // Please write your code here.
    int max = INT_MIN;
    for(int i = 0; i < n - 1; i++){
        for(int j = 0; j < m - 1; j++){
            int sum = 0;
            int blocks[4] = {grid[i][j], grid[i][j + 1], grid[i + 1][j], grid[i + 1][j + 1]};

            for(int except = 0; except < 4; except ++){
                for(int k = 0; k < 4; k++){
                    if(k != except)
                        sum += blocks[k];
                }
                if(max <= sum)
                    max = sum;
                sum = 0;
            }
        }
    }

    for(int i = 0; i < n; i++){
        for(int j = 0; j < m - 2; j++){
            int sum = grid[i][j] + grid[i][j + 1] + grid[i][j + 2];
            if(sum >= max)
                max = sum;
        }
    }

    for(int i = 0; i < n - 2; i++){
        for(int j = 0; j < m; j++){
            int sum = grid[i][j] + grid[i + 1][j] + grid[i + 2][j];
            if(sum >= max)
                max = sum;
        }
    }

    cout << max << '\n';
    return 0;
}
