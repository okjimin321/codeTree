#include <iostream>
#include<climits>

using namespace std;

int N;
int nums[1000];
bool isDuplicate(int x){
    int count = 0;
    for(int i = 0; i < N; i++){
        if(x == nums[i]){
            count++;
        }
    }

    if(count > 1){
        return true;
    }
    return false;
}

int main() {
    cin >> N;
    for (int i = 0; i < N; i++) {
        cin >> nums[i];
    }

    // Write your code here!
    int m = -1;
    for(int i = 0; i < N; i++){
        m = max(m, nums[i]);
    }

    int c = 0;
    while(isDuplicate(m)){
        if(c > N){
            break;
        }
        int x = m;
        for(int i = 0; i < N; i++){
            if(nums[i] == x){
                nums[i] = -1;
            }
            m = INT_MIN;
            m = max(m, nums[i]);
        }
        c++;
    }

    cout << m << endl;
    return 0;
}
