#include <iostream>

using namespace std;

int n, m;
int dx[4] = {1, 0, -1, 0};
int dy[4] = {0, 1, 0, -1};

bool inRange(int x, int y){
    return (0 <= x && x < n) && (0 <= y && y < m);
}

void print_arr(int** arr){
    for(int i = 0 ; i < n; i++){
        for(int j = 0;  j < m; j++){
            cout << arr[i][j] << " ";
        }
        cout << '\n';
    }
}


int main() {
    cin >> n >> m;

    int** arr = new int*[n];
    for(int i = 0; i < n ;i++){
        arr[i] = new int[m]{};
    }

    int x , y;
    int dir;
    x = y = dir = 0;

    for(int i = 0; i < n * m; i++){

        //marking 
        arr[x][y] = i + 1;

        //move 
        int nx = x + dx[dir];
        int ny = y + dy[dir];

        if(!inRange(nx, ny) || arr[nx][ny] != 0){
            dir = (dir + 1) % 4;
        }
        x += dx[dir];
        y += dy[dir];
    }

    print_arr(arr);
    

    return 0;
}