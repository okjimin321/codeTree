#include <iostream>

using namespace std;

int R, C;
char grid[15][15];

int main() {
    cin >> R >> C;
    for (int i = 0; i < R; i++) {
        for (int j = 0; j < C; j++) {
            cin >> grid[i][j];
        }
    }

    // Write your code here!
    int ans = 0;

    for (int i = 1; i < R; i++) {
        for (int j = 1; j < C; j++) {
            if (grid[0][0] != grid[i][j]) {
                for (int k = i + 1; k < R; k++) {
                    for (int l = j + 1; l < C; l++) {
                        if (k < R - 1 && l < C - 1) {
                            if(grid[i][j] != grid[k][l])
                                ans++;
                        }
                    }
                }
            }
        }
    }

    cout << ans << endl;
    return 0;
}