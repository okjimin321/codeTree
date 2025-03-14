#include <iostream>
using namespace std;

int main() {
    // Please write your code here.
    int x;
    cin >> x;

    int count = 0;
    int tar = x;
    while(count != 2){
        if(tar % 5 == 0)
            count++;
        cout << tar << " ";
        tar += x;
        
    }
    return 0;
}