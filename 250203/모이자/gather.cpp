#include <iostream>
#include<climits>
using namespace std;

int n;
int A[100];

int main() {
    cin >> n;
    for (int i = 0; i < n; i++) {
        cin >> A[i];
    }

    // Write your code here!

    int m = INT_MAX;
    for(int i = 0; i < n; i++){
        int sum = 0;
        for(int j = 0; j < n; j++){
            if(j < i){
                sum += (i - j) * A[j];
            }
            else if(j == i){
                sum += 0;
            }
            else{// i < j
                sum += (j - i) * A[j];
            }
        }
        m = min(m, sum);
    }

    cout << m;
    return 0;
}