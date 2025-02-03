#include <iostream>
#include <string>

using namespace std;

int N, T;
string str;
int board[100][100];
int dx[4] = {-1, 0, 1, 0};
int dy[4] = {0, -1, 0, 1};
bool inRange(int x, int y){
    return (0 <= x && x < N) && (0 <= y && y < N);
}
int main() {
    cin >> N >> T;
    cin >> str;

    for (int i = 0; i < N; i++) {
        for (int j = 0; j < N; j++) {
            cin >> board[i][j];
        }
    }

    int x, y;
    x = y = N / 2;
    int dir = 0;
    int sum = 0;

    for(int i = 0; i < str.size(); i++){

        char c_dir = str[i];
        if(c_dir == 'L'){
            dir = (dir + 1) % 4;
        }
        else if(dir == 'R'){
            dir = (dir + 3) % 4;
        }
        else{
            int nx = x + dx[dir];
            int ny = y + dy[dir];

            if(!inRange(nx, ny)){
                continue;
            }
            
            sum += board[x][y];
            x += dx[dir];
            y += dy[dir];
            
            
        }
    }

    cout << sum;

    return 0;
}