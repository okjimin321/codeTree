#include <iostream>

using namespace std;

int n;
int grid[100][100]{};

int dx[4] = {0, 1, 0, -1};
int dy[4] = {1, 0, -1, 0};
bool inRange(int x, int y, int mid, int mag){
    return (mid - mag <= x && x <= mid + mag) && (mid - mag <= y && y <= mid + mag);
}

int main() {
    cin >> n;

    //setting starting point
    int mid = n / 2;
    int x = mid;
    int y = mid;
    int dir = 0;
    int count = 1;

    int turn = 0;
    for(int i = 0; i < n * n; i++){
        //marking
        grid[x][y] = i + 1;

        //change direction
        int nx = x + dx[dir];
        int ny = y + dy[dir];

        
        if(!inRange(nx, ny, mid, count)){
            dir = (dir + 3) % 4;
            turn++;
        }

        x = x + dx[dir];
        y = y + dy[dir];

        //increase border
       if(turn == 4){
            count++;
            turn = 0;
       }
    }

    for(int i = 0; i < n; i++){
        for(int j = 0; j < n; j++){
            cout << grid[i][j] << " ";
        }
        cout << '\n';
    }


    return 0;
}
