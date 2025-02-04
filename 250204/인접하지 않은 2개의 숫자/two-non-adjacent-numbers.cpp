#include <iostream>
#include<climits>
#include<cmath>
using namespace std;

int n;
int numbers[100];

int main() {
    cin >> n;
    for (int i = 0; i < n; i++) {
        cin >> numbers[i];
    }

    // Write your code here!

    int max_sum = INT_MIN;
    for(int i = 0; i < n; i++){
        int sum = numbers[i];

        int max_num = INT_MIN;
        for(int j = 0; j < n; j++){
            if(abs(j - i) != 1 && i != j){
                max_num = max(max_num, numbers[j]);
            }
        }
        sum += max_num;

        max_sum = max(max_sum, sum);
    }


    cout << max_sum << endl;

    return 0;
}