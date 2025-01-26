#include <iostream>

using namespace std;

int n;
int x1[100], x2[100];

int main() {
    cin >> n;
    int* arr = new int[100];

    for (int i = 0; i < n; i++) {
        cin >> x1[i] >> x2[i];
        for(int j = x1[i]; j < x2[i]; j++){
            arr[j]++;
        }
    }

    
    int m = 0;
    for(int i = 0; i < 100; i++){
        //cout << arr[i] << " ";
        m = max(m, arr[i]);
    }

    //cout << '\n';
    cout << m << '\n';
    // Write your code here!

    return 0;
}