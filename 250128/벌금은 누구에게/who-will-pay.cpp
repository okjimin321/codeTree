#include <iostream>

using namespace std;

int N, M, K;
int student[10000]{};

int main() {
    cin >> N >> M >> K;

    for (int i = 0; i < M; i++) {
        int x;
        cin >> x;

        student[x]++;
    }


    bool c = false;
    int i = 1;
    for(; i <= N; i++){
        if(student[i] >= K){
            c = true;
            break;
        }
    }

    if(c){
        cout << i << '\n';
    }
    else{
        cout << -1 << '\n';
    }

    // Write your code here!

    return 0;
}