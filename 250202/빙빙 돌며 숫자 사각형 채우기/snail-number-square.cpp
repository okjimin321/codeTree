#include <iostream>

using namespace std;

int n, m;
int arr[100][100];
int dy[4] = {1, 0, -1, 0};
int dx[4] = {0, 1, 0, -1};

bool inRange(int x, int y){
    return (0 <= x && x < n ) && (0 <= y && y < m);
}
int main() {
    cin >> n >> m;

    //make arr;
    int** arr = new int*[n];
    for(int i = 0; i < n; i++){
        arr[i] = new int[m]{};
    }

    int x = 0;
    int y = 0;
    int dir = 0;

    for(int i = 0; i < n * m; i++){
       
       int nx = x + dx[dir];
       int ny = y + dy[dir];

       if(!inRange(nx, ny) || arr[nx][ny] != 0){
            dir = (dir + 1) % 4;
        }

        arr[x][y] = i + 1;
        x = x + dx[dir];
        y = y + dy[dir];

    }


    for(int i = 0; i < n; i++){
        for(int j = 0; j < m; j++){
            cout << arr[i][j] << " ";
        }
        cout << '\n';
    }
    return 0;
}