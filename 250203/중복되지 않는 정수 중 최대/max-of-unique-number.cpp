#include <iostream>
#include<algorithm>
using namespace std;

int N;

struct  E{
    int val;
    int count;

    E(int v){
        val = v;
        count = 1;
    }
    E(){
        val = -1;
        count = 0;
    }
};

int main() {
    cin >> N;

    E arr[1000];
    for (int i = 0; i < N; i++) {
        int x;
        cin >> x;

        if(arr[x].count != 0){
            arr[x].count++;
        }
        else{
            arr[x] = E(x);
        }
    }

    // Write your code here!
    int max = -1;
    for(int i = 0; i < 1000; i++){
        if(arr[i].count == 1){
            if(arr[i].val > max);{
                max = arr[i].val;
            }
        }
    }

    cout << max;
    return 0;
}
