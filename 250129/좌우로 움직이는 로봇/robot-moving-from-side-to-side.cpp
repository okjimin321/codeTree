#include <iostream>
#define MAX 1000000
using namespace std;

int n, m;
int t[50000];
char d[50000];
int t_b[50000];
char d_b[50000];

int main() {
    cin >> n >> m;

    //setting location_a
    int location_a[MAX + 1]{};
    int time_a = 1;
    for (int i = 0; i < n; i++) {
        int t;
        char d;
        cin >> t >> d;

        while(t--){
            if(d == 'R'){
                location_a[time_a] = location_a[time_a - 1] + 1;
            }
            else if(d == 'L'){
                 location_a[time_a] = location_a[time_a - 1] - 1;
            }
            time_a++;
        }
    }

    //setting location_b
    int location_b[MAX + 1]{};
    int time_b = 1;
    for (int i = 0; i < m; i++) {
        int t;
        char d;
        cin >> t >> d;

        while(t--){
            if(d == 'R'){
                location_b[time_b] = location_b[time_b - 1] + 1;
            }
            else if(d == 'L'){
                 location_b[time_b] = location_b[time_b - 1] - 1;
            }
            time_b++;
        }
    }

    int ans = 0;
    int cur_a = 1;
    int cur_b = 1;
    while(true){
        //checking whether they meet the condition
        if(location_a[cur_a] == location_b[cur_b] && location_a[cur_a - 1] != location_b[cur_b - 1]){
            ans++;
            //cout << cur_a << '\n';
        }

        //increasing a, b
        if(cur_a <= time_a){
            cur_a++;
        }
        if(cur_b <= time_b){
            cur_b++;
        }

        //base case
        if(cur_a == time_a + 1 && cur_b == time_b + 1){
            break;
        }
    }


    cout << ans << '\n';
    // Write your code here!

    return 0;
}