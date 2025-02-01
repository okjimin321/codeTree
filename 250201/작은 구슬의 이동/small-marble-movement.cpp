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

    int nx = dx[dir];
    int ny = dy[dir];
    //cout << nx << " " << ny <<endl;
    r--; c--;
    while(t--){
        //move
        r = r + nx;
        c = c + ny;
       // cout << r << " " << c << endl;
        
        if(inGrid(r,c)){
            continue;
        }

        //change direction;
        dir = 3 - dir;
        nx = dx[dir];
        ny = dy[dir];
        
        r += nx;
        c += ny;
        //t--;
    }

    cout << r + 1  << " " << c + 1 << endl;
    
    

    return 0;
}