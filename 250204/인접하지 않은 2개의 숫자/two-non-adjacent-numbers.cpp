#include <iostream>
#include<climits>
using namespace std;

int n;
int a[100];

int main() {
    cin >> n;
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }

    // Write your code here!
    int max_sum = INT_MIN;
    for(int i = 0; i < n; i++){
        for(int j = i + 2; j < n; j++){
            max_sum = max(max_sum, a[i] + a[j]);
        }
    }
    
    cout << max_sum << endl;
    return 0;
}