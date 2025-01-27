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
            if(x[i] != 1)
                loc[i + 1] = loc[i] - x[i] + 1;
            else if(x[i] == 1){
                loc[i + 1] = loc[i];
            }
            
        }
        else if(dir[i] == 'R'){
            if(x[i] != 1)
                loc[i + 1] = loc[i] + x[i] - 1;
            else if(x[i] == 1){
                loc[i + 1] = loc[i];
            }
        }
    }

    

    int* checked = new int[200000];
    int* lastest = new int[200000];
    //initialize to distinguish white and black
    for(int i = 0; i < (1000 * 100 * 2); i++){
        checked[i] = 1;
        lastest[i] = 0;
    }


    //checking section
    for(int i = 0; i < 1000; i++){
        int start = min(loc[i], loc[i + 1]);
        int end = max(loc[i], loc[i + 1]);
        
        //black
       

        if(dir[i] == 'R'){
            for(int j = start; j <= end; j++){
                checked[j + 100000] = checked[j + 100000] * 3;
                lastest[j + 100000] = 69; 
            }
        }

        //white
        else if(dir[i] == 'L'){
            for(int j = start; j <= end; j++){
                checked[j + 100000] = checked[j + 100000] * 2;
                lastest[j + 100000] = 74; 
            }
        }

      
        
    }

    int g , b , w;
    g = b = w = 0;
    
    for(int i = 0; i < 200000; i++){
        if(checked[i] % 36 == 0){
            //cout << "g " << i - 100000<< '\n';
            g++;
        }
        else if(lastest[i] == 74){
           //cout << "w " << i - 100000<< '\n';
            w++;
        }
        else if(lastest[i] == 69){
            //cout << "b " << i - 100000<< '\n';
            b++;
        }
    }

    cout << w << " " << b << " " << g << endl;
    return 0;
}