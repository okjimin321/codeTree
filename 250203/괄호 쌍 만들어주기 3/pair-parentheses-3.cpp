#include <iostream>
#include <string>

using namespace std;

string A;

int main() {
    cin >> A;

    // Write your code here!

    int ans = 0;
    int n = A.size();
    for(int i = 0; i < n; i++){
        if(A[i] == ')'){
            continue;
        }

        for(int j = i + 1; j < n; j++){
            if(A[j] == ')'){
                ans++;
            }
        }
    }

    cout << ans << endl;

    return 0;
}