#include <iostream>
#include<vector>
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

    

    double* checked = new double[200000];
    char* lastest = new char[200000];
    vector<vector<char>> arr1;
    vector<vector<char>> arr2;
    vector<vector<char>> arr3;
    //initialize to distinguish white and black
    for(int i = 0; i < (200000); i++){
        checked[i] = 1;
        lastest[i] = 0;
        arr1.push_back(vector<char>());
        arr2.push_back(vector<char>());
        arr3.push_back(vector<char>());
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
                arr1[j + 100000].push_back('B');
                arr3[j + 100000].push_back('B');
            }
        }

        //white
        else if(dir[i] == 'L'){
            for(int j = start; j <= end; j++){
                checked[j + 100000] = checked[j + 100000] * 2;
                lastest[j + 100000] = 'W'; 
                arr2[j + 100000].push_back('W');
                arr3[j + 100000].push_back('W');
            }
        }

      
        
    }

    int g , b , w;
    g = b = w = 0;
    
   for (int i = 0; i < 200000; i++) {
    int bCount = arr1[i].size();
    int cCount = arr2[i].size();

    int size = arr3[i].size();

    if (bCount >= 2 && cCount >= 2) {
        g++;
    } 
    else if (!arr3[i].empty() && arr3[i][size - 1] == 'W') {
        w++;
    } 
    else if (!arr3[i].empty() && arr3[i][size - 1] == 'B') {
        b++;
    }
}


    cout << w << " " << b << " " << g << endl;
    return 0;
}