#include <iostream>

using namespace std;

int mid_x = 0;
int mid_y = 0;
int board[19][19];
int dx[8] = { 0, -1, -1, -1, 0, 1, 1, 1 };
int dy[8] = { 1, 1, 0, -1, -1, -1, 0, 1 };

bool inRange(int x, int y) {
    return (0 <= x && x < 19) && (0 <= y && y < 19);
}

bool isWin(int x, int y) {
    for (int i = 0; i < 8; i++) {
        int count = 0;
        int nx, ny;
        nx = x;     ny = y;

        for (int j = 0; j < 5; j++) {
            if (inRange(nx, ny) && board[x][y] == board[nx][ny]) {
                count++;
                nx = nx + dx[i];
                ny = ny + dy[i];
            }
            else {
                continue;
            }
        }

        if (count == 5) {
            mid_x = nx - dx[i] * 3 + 1;
            mid_y = ny - dy[i] * 3 + 1;
            return true;
        }
    }

    return false;
}

int main() {
    for (int i = 0; i < 19; i++)
        for (int j = 0; j < 19; j++) cin >> board[i][j];

    // Write your code here!
    int winner = 0;
    for (int i = 0; i < 19; i++) {
        for (int j = 0; j < 19; j++) {
            if (board[i][j] == 1) {
                if (isWin(i, j)) {
                    winner = 1;
                }
            }
            else if (board[i][j] == 2) {
                if (isWin(i, j)) {
                    winner = 2;
                }
            }
        }
    }
   
    cout << winner << '\n';

    if (winner != 0) {
        cout << mid_x << " " << mid_y << endl;
    }
    return 0;
}