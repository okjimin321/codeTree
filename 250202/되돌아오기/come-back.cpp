#include <iostream>

using namespace std;

int N;
char dir[100];
int dist[100];
int dx[4] = {-1, 0, 1, 0};
int dy[4] = {0, 1, 0, -1};

int main() {
    cin >> N;

    int dirToidx[128];
    dirToidx['N'] = 0;
    dirToidx['E'] = 1;
    dirToidx['S'] = 2;
    dirToidx['W'] = 3;

    for (int i = 0; i < N; i++) {
        cin >> dir[i] >> dist[i];
    }

    //int arr[1000][1000]{};
    int x = 0;
    int y = 0;
    int time = 0;

    for(int i = 0; i < N; i++){
        while(dist[i]--){
            x += dx[dirToidx[dir[i]]];
            y += dy[dirToidx[dir[i]]];
            //cout << x << " " << y <<endl;
            time++;
            if(x == 0 && y == 0){
                cout << time << endl;
                return 0;
            }
        }
    }

    cout << -1 << endl;

    return 0;
}