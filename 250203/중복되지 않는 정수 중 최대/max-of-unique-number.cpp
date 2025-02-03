#include <iostream>

using namespace std;

int N;
int nums[1000];

int main() {
    cin >> N;
    for (int i = 0; i < N; i++) {
        cin >> nums[i];
    }

    // Write your code here!
    int max = -1;
    for(int i = 0; i < N; i++){
        if(max < nums[i]){
            int count = 0;
            for(int j = 0; j < N; j++){
                if(nums[j] == nums[i]){
                    count++;
                }
            }

            if(count == 1){
                max = nums[i];
            }
        }
    }

    cout << max << endl;

    return 0;
}
