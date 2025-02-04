#include <iostream>
#include<climits>
using namespace std;

int n;
int arr[20];

bool isValid(int x, int y, int z) {
    int mul = 1;
    while (mul <= x || mul <= y || mul <= z) {
        int x_val = (x / mul) % 10;
        int y_val = (y / mul) % 10;
        int z_val = (z / mul) % 10;

        if (x_val + y_val + z_val > 9) {
            return false;
        }

        mul *= 10;
    }

    return true;
}

int main() {
    cin >> n;
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    // Write your code here!
    int max_sum = -1;

    for (int i = 0; i < n; i++) {
        for (int j = i + 1; j < n; j++) {
            for (int k = j + 1; k < n; k++) {
                if (isValid(arr[i], arr[j], arr[k])) {
                    max_sum = max(max_sum, arr[i] + arr[j] + arr[k]);
                }
            }
        }
    }

    cout << max_sum << '\n';
    return 0;
}