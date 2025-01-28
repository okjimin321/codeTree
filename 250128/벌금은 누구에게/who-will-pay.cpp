#include <iostream>
using namespace std;

int  N, M, K;


int main() {
    cin >> N >> M >> K;

    int* student = new int[N];
    int ans = -1;
    for (int i = 0; i < M; i++) {
        int x;
        cin >> x;

        student[x]++;
        if(student[x] >= K){
            ans = x;
            break;
        }
    }

    cout << ans << '\n';

    delete[] student;
    return 0;
}