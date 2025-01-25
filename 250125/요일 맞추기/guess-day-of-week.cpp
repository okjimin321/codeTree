#include <iostream>

using namespace std;

int m1, d1, m2, d2;

string dayOfWeak[7] = {"Mon", "Tue", "Wed","Thu", "Fri", "Sat", "Sun"};

int daysOfMonth[12] = {31, 28, 31,30, 31,30,31,31,30,31,30,31};

int main() {
    cin >> m1 >> d1 >> m2 >> d2;

    int totalA = d1;
    for(int i  = 0; i < m1 - 1;i++){
        totalA += daysOfMonth[i];
    }

    int totalB = d2;
    for(int i  = 0; i < m2 - 1;i++){
        totalB += daysOfMonth[i];
    }

    
    
        cout << dayOfWeak[(totalB - totalA + 700) % 7];

    return 0;
}