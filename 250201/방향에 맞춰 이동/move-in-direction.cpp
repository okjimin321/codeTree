#include <iostream>

using namespace std;

int n;
int dx[4] = {0, 1 , 0, -1};
int dy[4] = {1, 0, -1, 0};

int main() {
    cin >> n;

    int x, y;
    x = y = 0;

    for (int i = 0; i < n; i++) {
        char dir;
        int dist;
        cin >> dir >> dist;

        int tmp;
        if(dir == 'N'){
            tmp = 0;
        }
        else if(dir == 'S'){
            tmp = 2;
        }
        else if(dir == 'E'){
            tmp = 1;
        }
        else{
            tmp = 3;
        }

        x += dx[tmp] * dist;
        y += dy[tmp] * dist;
    }


    cout << x << " " << y << '\n';
    // Write your code here!

    return 0;
}