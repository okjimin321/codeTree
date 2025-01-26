#include <iostream>

using namespace std;

int n;
int x[100];
char dir[100];

int main() {
    cin >> n;

    int* loc = new int[101]{};
    loc[0] = 0;
    for (int i = 0; i < n; i++) {
        cin >> x[i] >> dir[i];

        //setting current location
        if(dir[i] == 'R'){
            loc[i + 1] = loc[i] + x[i];
        }
        else if(dir[i] == 'L'){
            loc[i + 1] = loc[i] - x[i];
        }
    }


    // Write your code here!
    int* checked = new int[2000]{};
    checked[1000]++;
    for(int i = 1; i < n; i++){
        int preDir = loc[i - 1];
        for(int j = 0; j < x[i]; j++){
            if(dir[i] == 'R'){
                preDir++;
                checked[preDir + 1000]++;
            }
            else if(dir[i] == 'L'){
                preDir--;
                checked[preDir + 1000]++;
            }
        }
    }

    int count = 0;
    for(int i = 0; i < 2000; i++){
        if(checked[i] >= 2){
            //cout << i - 1000 << '\n';
            count++;
        }
    }
    cout << count + 1<< '\n';
    
    return 0;
}