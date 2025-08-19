#include <iostream>

using namespace std;

int n, m;
int grid[100][100];

int main() {
    cin >> n >> m;

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            cin >> grid[i][j];
        }
    }

    // Please write your code here.]
    int happy_count = 0;
    for(int i = 0; i < n; i++){
        int prev = grid[i][0];
        int same_count = 0;

        for(int j = 0; j < n; j++){
            int cur = grid[i][j];

            if(prev == cur){
                same_count++;
                if(same_count >= m){
                    happy_count++;
                    break;
                }
            }
            else
                same_count = 1;
            prev = cur;
        }
    }

    for(int i = 0; i < n; i++){
        int prev = grid[0][i];
        int same_count = 0;

        for(int j = 0; j < n; j++){
            int cur = grid[j][i];

            if(prev == cur){
                same_count++;
                if(same_count >= m){
                    happy_count++;
                    break;
                }
            }
            else
                same_count = 1;
            prev = cur;
        }
    }

    cout << happy_count << '\n';
    return 0;
}
