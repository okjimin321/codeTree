#include <iostream>
#include<climits>

using namespace std;

int n;
int a[1003];

int main() {
    cin >> n;
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }

    // Write your code here!
    int ans = INT_MAX;
    for (int i = 0; i < n; i++) {

        int distance_sum = 0;
        int start = i;
        for (int j = 0; j < n; j++) {
            if (j < start) {
                distance_sum += a[j] * (n - start + j);
            }
            else{
                distance_sum += a[j] * (j - start);
            }
        }

        ans = min(ans, distance_sum);
    }

    cout << ans << endl;
    return 0;
}