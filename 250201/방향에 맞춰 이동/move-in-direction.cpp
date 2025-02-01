#include <iostream>

using namespace std;

int n;
char dir[100];
int dist[100];

int main() {
    cin >> n;

    int x, y;
    x = y = 0;

    for (int i = 0; i < n; i++) {
        char dir;
        int dist;
        cin >> dir >> dist;
        
        if(dir == 'N'){
            y += dist;
        }
        else if(dir == 'S'){
            y -= dist;
        }
        else if(dir == 'E'){
            x += dist;
        }
        else{
            x -= dist;
        }
    }


    cout << x << " " << y << '\n';
    // Write your code here!

    return 0;
}