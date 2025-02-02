#include <iostream>

using namespace std;

int n;
char grid[1000][1000];
int k;
int dx[4] = {0, 1, 0, -1};
int dy[4] = {1, 0, -1, 0};

bool inRange(int x, int y){
    return (0 <= x && x < n) && (0 <= y && y < n);
}

int main() {
    cin >> n;

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            cin >> grid[i][j];
        }
    }

    cin >> k;
    
    //find starting point
    int x, y;
    int dir;

    if(k <= n){
        x = 0;
        y = k % n - 1;
        dir = 1;
    }
    else if(k <= 2 * n){
        x = k % n - 1;
        y = n - 1;
        dir = 2;
    }
    else if(k <= 3 * n){
        x = n - 1;
        y = (n - (k % n)) % n ;
        dir = 3;
    }
    else{
        x = (n - (k % n)) % n;
        y = 0;
        dir = 0;
    }
    //cout << x<< " " << y << " " << dir << endl;

    //find exit point
    int ans = 0;
   while(inRange(x, y)){
        char mirror = grid[x][y];

        if(mirror == '/'){
            //Right
            if(dir == 0){
                dir = 3;
            }
            //Left
            else if(dir == 1){
                dir = 2;
            }
            //Down
            else if(dir == 2){
                dir = 1;
            }
            //up
            else{//dir == 3
                dir = 0;
            }
        }

        else{//mirrot == '\'
            if(dir == 0){
                dir = 1;
            }
            else if(dir == 1){
                dir = 0;
            }
            else if(dir == 2){
                dir = 3;
            }
            else{//dir == 3
                dir = 2;
            }
        }

        x = (x + dx[dir]);
        y = (y + dy[dir]);
        ans++;
        //cout << "cur: "<< x << " " << y << " d: " << dir << '\n';
   }
   //cout << x << "  " << y << endl;
   cout << ans << '\n';

    return 0;
}