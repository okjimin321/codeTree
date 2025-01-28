#include <iostream>
#define MAX 1000000
using namespace std;

int N, M;
int v2[1000], t2[1000];

int main() {
    cin >> N >> M;

    int path1[MAX + 1]{};
    int cur = 0;
    for (int i = 0; i < N; i++){
        int v, t;
         cin >> v >> t;

        while(t--){
            path1[cur + 1] = path1[cur] + v;
            cur++;
        }
    }
    
    int path2[MAX + 1]{};
    int cur2 = 0;
    for (int i = 0; i < N; i++){
        int v, t;
         cin >> v >> t;

        while(t--){
            path2[cur2 + 1] = path2[cur2] + v;
            cur2++;
        }
    }

    int leader = 0;     int ans = 0;
    for(int i = 1; i < cur; i++){
        if(path1[i] > path2[i]){

            if(leader == 2){
                ans++;
            }

            leader = 1;
        }
        else if(path1[i] < path2[i]){

            if(leader == 1){
                ans++;
            }

            leader = 2;
        }
    }

    cout << ans << '\n';


    return 0;
}