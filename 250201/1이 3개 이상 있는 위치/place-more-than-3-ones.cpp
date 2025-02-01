#include <iostream>

using namespace std;

int n;
bool grid[100][100];
int dx[4] = {0, 1, 0, -1};
int dy[4] = {1, 0, -1, 0};

bool inRange(int x, int y){
    return (0 <= x && x < n) && (0 <= y && y < n);
}
int main() {
    cin >> n;

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            cin >> grid[i][j];
        }
    }

    int ans = 0;
    for(int i = 0; i < n; i++){
        int cnt = 0;

        for(int j = 0; j < n; j++){
            for(int k = 0; k < 4; k++){
                int x = i + dx[k];
                int y = j + dy[k];
                if(inRange(x,y) && grid[x][y] == 1){
                    cnt++;
                }
            }
        }

        if(cnt >= 3){
            ans++;
        }

    }

    cout << ans << '\n';

    // Write your code here!

    return 0;
}