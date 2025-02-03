#include <iostream>

using namespace std;

string a;

int main() {
    cin >> a;

    // Write your code here!
    int ans = 0;
    for (int i = 1; i < a.size(); i++) {
        //temperatly change
        if (a[i] == '1') {
            a[i] = '0';
        }
        else {
            a[i] = '1';
        }

        //add sum
        int sum = 0;  
        for (int j = a.size() - 1; j >= 0; j--) {
            sum = sum * 2 + a[i] - '0';
        }
        
        ans = max(ans, sum);
        
        //return to origin
        if (a[i] == '1') {
            a[i] = '0';
        }
        else {
            a[i] = '1';
        }
    }

    cout << ans;
    return 0;
}