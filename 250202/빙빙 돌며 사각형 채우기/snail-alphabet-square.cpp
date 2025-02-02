#include <iostream>

#define MAX 100
using namespace std;

int n, m;
int dx[4] = {0, 1, 0, -1};
int dy[4] = {1, 0, -1, 0};
bool inRange(int x, int y){
    return (0 <= x && x < n ) && (0 <= y && y < m);
}
int main() {
    cin >> n >> m;

    char arr[MAX][MAX]{};
    int x, y, dir;
    x = y = 0;
    dir = 0;

    char checker = 'A';
    for(int i = 0; i < n * m; i++){

        //checking
        checker = 'A' + i % 26;
        arr[x][y] = checker;
        //cout << x << " " << y << " " << checker << endl;
        

        int nx = x + dx[dir];
        int ny = y + dy[dir];

        if(!inRange(nx, ny) || arr[nx][ny] != 0){
            dir = (dir + 1) % 4;
        }

        x += dx[dir];
        y += dy[dir];
    }

    for(int i = 0;i < n; i++){
        for(int j = 0; j < m; j++){
            cout << arr[i][j] << " ";
        }
        cout << '\n';
    }

    return 0;
}
