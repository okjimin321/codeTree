#include <iostream>
#include <string>

using namespace std;

string commands;

int dx[4] = {-1, 0, 1, 0};
int dy[4] = {0, 1, 0, -1};

int main() {
    cin >> commands;

    int dir = 0;
    int x, y;
    x = y = 0;

    for(int i = 0; i < commands.size(); i++){
        char cur = commands[i];

        if(cur == 'R'){
            dir = (dir + 1) % 4;
        }
        else if(cur == 'L'){
            dir = (dir - 1) % 4;
        }
        else{
            x += dx[dir];
            y += dy[dir];

            if(x == 0 && y == 0){
                cout << i + 1 << endl;
                return 0;
            }
        }
    }

    cout << -1 << endl;

    return 0;
}