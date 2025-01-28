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

    for(int i = 1; i <= N; i++){
        if(student[i] >= K){
            cout << i  << '\n';
            break;
        }
    }

    // Write your code here!

    return 0;
}