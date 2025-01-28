#include <iostream>
#include<vector>
using namespace std;

int N, M;
int v[1000], t[1000];
int v2[1000], t2[1000];

int main() {
    cin >> N >> M;

    
    vector<int> cur1; cur1.push_back(0);
    for (int i = 0; i < N; i++){
        cin >> v[i] >> t[i];

        for(int j = 0; j < t[i]; j++){
            cur1.push_back(cur1[cur1.size() - 1] + v[i]);
        }
    }

    vector<int> cur2; cur2.push_back(0);
    for (int i = 0; i < M; i++) {
        cin >> v2[i] >> t2[i];

        for(int j = 0; j < t2[i]; j++){
            cur2.push_back(cur2[cur2.size() - 1] + v2[i]);
        }
    }
    
    vector<int> result; result.push_back(0);
    for(int i = 1; i < cur1.size(); i++){
        //p1 wins
        if(cur1[i] > cur2[i]){
            result.push_back(1);
        }
        //p2 wins
        else if(cur1[i] < cur2[i]){
            result.push_back(2);
        }
        //draw
        else{
            result.push_back(result[result.size() - 1]);
        }
    }

    
    int c = 0;
    for(int i = 1; i < result.size(); i++){
    
        if(result[i - 1] != result[i] ){
            //cout << i << '\n';
            c++;
        }
    }

    cout << c - 1<< '\n';

    return 0;
}