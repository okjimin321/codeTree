#include <iostream>

using namespace std;

int n;
int x[1000];
char dir[1000];

int main() {
    cin >> n;


    int* loc = new int[1001];   loc[0] = 0;
    for (int i = 0; i < n; i++) {
        cin >> x[i] >> dir[i];

        if(dir[i] == 'R'){
            loc[i + 1] = loc[i] + x[i];
        }
        else if(dir[i] == 'L'){
            loc[i + 1] = loc[i] - x[i];
        }
    }


    int* checked = new int[1000 * 100 * 2];
    int* lastest = new int[1000 * 100 * 2];
    //initialize to distinguish white and black
    for(int i = 0; i < 1000 * 100 * 2; i++){
        checked[i] = 1;
        lastest[i] = 0;
    }

    for(int i = 0; i < 1000; i++){
        int start = min(loc[i], loc[i + 1]);
        int end = max(loc[i], loc[i + 1]);
        
        int counter = 1;
        int last = 0;

        //black
        if(dir[i] == 'R'){
            counter = 3;
            last = 1;
        }

        //white
        else if(dir[i] == 'L'){
            counter = 2;
            last = 2;
        }

        for(int j = start; j < end; j++){
            checked[j + 1000 * 100] = checked[j + 1000 * 100] * counter;
            lastest[j + 1000 * 100] = last; 
        }
        
    }

    int g , b , w;
    g = b = w = 0;
    for(int i = 0; i < 1000 * 100 * 2; i++){
        if(checked[i] % 36 == 0){
            g++;
        }
        else if(lastest[i] == 1){
            b++;
        }
        else if(lastest[i] == 2){
            w++;
        }
    }

    cout << w << " " << b << " " << g << endl;
    return 0;
}