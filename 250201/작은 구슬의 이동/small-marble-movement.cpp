#include <iostream>

using namespace std;

int n, t;
int r, c;
char d;

int dx[4] = {0,1,-1,0};
int dy[4] = {1,0,0,-1};
bool inGrid(int x, int y){
    return (0 <= x && x < n) && (0 <= y && y < n);
}

int main() {
    cin >> n >> t;
    cin >> r >> c >> d;

    int dir;
    if(d == 'R'){
        dir = 0;
    }
    else if(d == 'L'){
        dir = 3;
    }
    else if(d == 'U'){
        dir = 2;
    }
    else{
        dir = 1;
    }
    r--; c--;

    while(t--){
        //move

        r += dx[dir];
        c += dy[dir];

        if(inGrid(r,c)){
            continue;
        }
        else{
            dir = 3 - dir;
            r += dx[dir];
            c += dy[dir];
        }
 
    }

    cout << r + 1  << " " << c + 1 << endl;
    
    

    return 0;
}