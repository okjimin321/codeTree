#include <iostream>
#include<climits>

using namespace std;

int n;
int x[100];
int y[100];

int main() {
    cin >> n;
    for (int i = 0; i < n; i++) {
        cin >> x[i] >> y[i];
    }

    // Write your code here!
    int ans = INT_MAX;

    for (int i = 1; i < n - 1; i++) {
        int sum = 0;
        
        for (int j = 0; j < n - 1; j++) {
            if (j == i) {
                continue;
            }
            else if (j == i - 1) {
                sum += abs(x[j + 2] - x[j]) + abs(y[j + 2] - y[j]);
            }
            else {
                sum += abs(x[j + 1] - x[j]) + abs(y[j + 1] - y[j]);
            }
        }
        ans = min(ans, sum);
    }

    cout << ans << endl;
    return 0;
}