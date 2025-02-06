#include<iostream>
#include<algorithm>

#define MAX_N 100

using namespace std;

int n, m;
int arr1[MAX_N], arr2[MAX_N];
int tmp[MAX_N];

int main(){

    cin >> n >> m;

    for(int i = 0; i < n; i++){
        cin >> arr1[i];
    }
    for(int i = 0; i < m; i++){
        cin >> arr2[i];
    }

    sort(arr2, arr2 + m);

    int ans = 0;
    for(int i = 0; i < n - m + 1; i++){
        for(int j = 0; j < m; j++){
            tmp[j] = arr1[i + j];
        }

        sort(tmp, tmp + m);

        bool isSame = true;
        for(int j = 0; j < m; j++){
            if(arr2[j] != tmp[j]){
                isSame = false;
            }
        }
        
        if(isSame){
            ans++;
        }
    }

    cout << ans << endl;
}