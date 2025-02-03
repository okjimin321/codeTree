#include <iostream>
#include<climits>
using namespace std;

int N;
int nums[1000];

int main() {
    cin >> N;
    for (int i = 0; i < N; i++) {
        cin >> nums[i];
    }

    // Write your code here!
    int ma = INT_MIN;
    for(int i = 0; i < N; i++){
        ma = max(ma, nums[i]); 
    }

    int c = 0;
    for(int i = 0; i < N; i++){
        if(nums[i] == ma){
            c++;
        }
    }

    if(c >= 2){
        cout << -1;
    }
    else{
        cout << ma;
    }

    return 0;
}
