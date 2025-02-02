#include <iostream>

using namespace std;

int N, M;

bool inRange(int x, int y){
    return (0 <= x && x < 200) && (0 <= y && y < 200);
}

int dx[4] = {-1, 0, 1, 0};
int dy[4] = {0, 1, 0, -1};

int main() {
    cin >> N >> M;

    bool arr[2000][2000]{};
 
    while(M--){
        int x, y;
        cin >> x >> y;

        //marking
        arr[x + 500][y + 500] = true;

        //counting
        int comfort_num = 0;
        for(int i = 0; i < 4; i++){
            int nx = x + dx[i] + 500;
            int ny = y + dy[i] + 500;

            if(inRange(nx, ny) && arr[nx][ny] == true){
                comfort_num++;
            }
        }

        if(comfort_num == 3){
            cout << 1 << '\n';
        }
        else{
            cout << 0 << '\n';
        }


    }

    return 0;
}