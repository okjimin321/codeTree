#include <iostream>

using namespace std;

string dirs;

int dx[4] = {0, 1 , 0, -1};
int dy[4] = {1, 0 , -1, 0};

int main() {
    cin >> dirs;

    int x, y;
    x = y = 0;
    int c = 0;

    for(int i = 0; i < dirs.size(); i++){
    
        if(dirs[i] == 'L'){
            c = (c - 1 + 4) % 4;
        }
        else if(dirs[i] == 'R'){
            c = (c + 1) % 4;
        }

        else{
            x += dx[c];
            y += dy[c];
        }


    }

    cout << x << " " << y << '\n';

    return 0;
}