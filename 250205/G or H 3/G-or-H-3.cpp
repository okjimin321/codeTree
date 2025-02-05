#include <iostream>
#include<climits>
using namespace std;

int N, K;

int main() {
    cin >> N >> K;

    char* arr = new char[10000 + 1]{};
    for (int i = 0; i < N; i++) {
        int x;
        char c;
        cin >> x >> c;

        arr[x] = c;
    }

    int max_sum = INT_MIN;
    for(int i = 1; i <= 10000 - K ; i++){
        int sum = 0;
        for(int j = i; j <= i + K; j++){
            if(arr[j] == 'G'){
                sum++;
            }
            else if(arr[j] == 'H'){
                sum += 2;
            }

        }   
        max_sum = max(max_sum, sum);
    }

    cout << max_sum << endl;
    delete[] arr;
    return 0;
}