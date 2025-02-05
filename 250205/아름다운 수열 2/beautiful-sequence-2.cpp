#include <iostream>

using namespace std;

int N, M;
int A[100], B[100];
bool isContain(int s){
    int count = 0;
    for(int i = s; i < s + M; i++){
        for(int j = 0; j < M; j++){
            if(A[i] == B[j]){
                count++;
            }
        }
    }

    if(count == M){
        return true;
    }
    return false;
}


int main() {
    cin >> N >> M;

    for (int i = 0; i < N; i++) cin >> A[i];

    for (int i = 0; i < M; i++) cin >> B[i];

    // Write your code here!
    int ans = 0;
    for(int i = 0; i < N - M + 1; i++){
        if(isContain(i)){
            ans++;
        }
    }

    cout << ans << '\n';

    return 0;
}