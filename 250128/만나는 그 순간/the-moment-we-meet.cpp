#include <iostream>
#include<vector>
using namespace std;

int n, m;
char d[1000];
int t[1000];
char d2[1000];
int t2[1000];

int main() {
    cin >> n >> m;
    
    vector<int> path1;      path1.push_back(0);
    vector<int> path2;      path2.push_back(0);

    for (int i = 0; i < n; i++) {
        char d;
        int t;
        cin >> d >> t;

        if(d == 'R'){
            while(t--){
                path1.push_back(path1[path1.size() - 1] + 1);
            }
        }
        else if(d == 'L'){
            while(t--){
                path1.push_back(path1[path1.size() - 1] - 1);
            }
        }
    }
    //test
    // for(int a : path1){
    //     cout << a << " "; 
    // }
    // cout << endl;

    for (int i = 0; i < m; i++) {
        char d;
        int t;
        cin >> d >> t;

        if(d == 'R'){
            while(t--){
                path2.push_back(path2[path2.size() - 1] + 1);
            }
        }
        else if(d == 'L'){
            while(t--){
                path2.push_back(path2[path2.size() - 1] - 1);
            }
        }
    }

    //test
    // for(int a : path2){
    //     cout << a << " "; 
    // }
    // cout << endl;

    bool c = false;
    int i = 1;
    for(; i < path1.size(); i++){
        if(path1[i] == path2[i]){
            c = true;
            break;
        }
    }

    if(c){
        cout << i << '\n';
    }
    else{
        cout << - 1 << '\n';
    }
    // Write your code here!

    return 0;
}