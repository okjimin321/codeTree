#include <iostream>

using namespace std;

int n;
int arr[100];

int main() {
    cin >> n;
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    // Write your code here!
    int ans = 0;

    for(int i = 0; i < n; i++){
        for(int j = i; j < n; j++){
            double sum = 0;
            for(int k = i; k <= j; k++){
                sum += arr[k];
            }
            for(int k = i; k <= j; k++){
                if((double)arr[k] == sum / (j - i + 1)){
                    ans++;
                    break;
                    //cout << "ds: " << i + 1 << "," << j + 1 << endl;
                } 
            }
        }
    }

    cout << ans << endl;
    return 0;
}