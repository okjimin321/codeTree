#include <iostream>

using namespace std;

int N, K;
int A[100], B[100];

int main() {
    cin >> N >> K;


    int* arr = new int[N];
   
    for (int i = 0; i < K; i++) {
        cin >> A[i] >> B[i];
        for(int j = A[i]; j <= B[i]; j++){
            arr[j - 1]++;
        }
    }

    int m = arr[0];
    for(int i = 0; i < N; i++){
        m = max(m, arr[i]);
    }

   cout << m << '\n';

    


    // Write your code here!

    return 0;
}