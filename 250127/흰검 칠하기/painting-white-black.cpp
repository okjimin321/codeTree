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

       
        if(dir[i] == 'L'){
            loc[i + 1] = loc[i] - x[i] + 1; 
        }
        else if(dir[i] == 'R'){
            loc[i + 1] = loc[i] + x[i] - 1;
        }
    }

    

    long long* checked = new long long[200000];
    char* lastest = new char[200000];
    //initialize to distinguish white and black
    for(int i = 0; i < (200000); i++){
        checked[i] = 1;
        lastest[i] = 0;
    }


    //checking section
    for(int i = 0; i < n; i++){
        int start = min(loc[i], loc[i + 1]);
        int end = max(loc[i], loc[i + 1]);
        
        //black
        if(dir[i] == 'R'){
            for(int j = start; j <= end; j++){
                checked[j + 100000] = checked[j + 100000] * 3;
                lastest[j + 100000] = 'B'; 
            }
        }

        //white
        else if(dir[i] == 'L'){
            for(int j = start; j <= end; j++){
                checked[j + 100000] = checked[j + 100000] * 2;
                lastest[j + 100000] = 'W'; 
            }
        }

      
        
    }

    int g , b , w;
    g = b = w = 0;
    
    for(int i = 0; i < 200000; i++){
        if((checked[i] % 36) == 0 ){
            //cout << "g " << i - 100000<< '\n';
            g++;
        }
        else if(lastest[i] == 'W'){
           //cout << "w " << i - 100000<< '\n';
            w++;
        }
        else if(lastest[i] == 'B'){
            //cout << "b " << i - 100000<< '\n';
            b++;
        }
    }

    cout << w << " " << b << " " << g << endl;
    return 0;
}