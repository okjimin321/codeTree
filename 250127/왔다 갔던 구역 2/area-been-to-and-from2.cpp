#include <iostream>

using namespace std;

int n;
int x[100];
char dir[100];

int main() {
    cin >> n;


    //record current location
    int loc[101]{};     loc[0] = 0;

    for (int i = 0; i < n; i++) {
        cin >> x[i] >> dir[i];

        if(dir[i] == 'L'){
            loc[i + 1] = loc[i] - x[i];
        }
        else if(dir[i] == 'R'){
            loc[i + 1] = loc[i] + x[i];
        }
    }

    //to move negative to positive
    int* checked = new int[2000];

    for(int i = 0; i < n; i++){
        int start = min(loc[i], loc[i + 1]);
        int end = max(loc[i], loc[i + 1]);

        for(int j = start; j < end; j++){
            checked[j + 1000]++;
        }
    }

    int c = 0;
    for(int i = 0; i < 2000; i++){
        if(checked[i] >= 2){
            c++;
        }
    }

    cout << c << '\n';
    return 0;
}