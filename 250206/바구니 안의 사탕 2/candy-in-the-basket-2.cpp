#include <iostream>
#include<climits>

#define MAX_LOC 100
using namespace std;

int N, K;
int candy[MAX_LOC + 1]{};

int main() {
    cin >> N >> K;

    for (int i = 0; i < N; i++) {
        int c;
        int loc;
        cin >> c >> loc;

        candy[loc] += c;
    }

    // Write your code here!
    int max_sum = INT_MIN;
    int sum  = 0;
    if(K >= 50){
        //cout << "응 아니야\n";
        for(int i = 0; i <= 100; i++){
            sum += candy[i];
        }

        max_sum = sum;
    }
    else{
    for(int i = K; i <= MAX_LOC - K; i++){
        int sum = 0;
        for(int j = i - K; j <= i + K; j++){
            sum += candy[j];
        }
        max_sum = max(max_sum, sum);
    }
    }
    cout << max_sum << endl;
    return 0;
}