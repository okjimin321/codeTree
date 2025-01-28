#include <iostream>

using namespace std;

int N, M, K;
int student[10000]{};

int main() {
    cin >> N >> M >> K;

    bool c = false;
    for (int i = 0; i < M; i++) {
        int x;
        cin >> x;

        student[x]++;
        if(student[x] >= K){
            cout << x << '\n';
            c = true;
            break;
        }
    }

    if(!c){
        cout << -1 << '\n';
    }

    // Write your code here!

    return 0;
}