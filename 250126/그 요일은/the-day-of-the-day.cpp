#include <iostream>

using namespace std;

int m1, m2, d1, d2;
string A;

string dayOfWeek[7] = {"Mon", "Tue", "Wed", "Thu", "Fri", "Sat", "Sun"};
int daysOfMonth[12] = {31, 29, 31, 30, 31, 30,31, 31, 30, 31, 30, 31};

int main() {
    cin >> m1 >> d1 >> m2 >> d2;
    cin >> A;

    int totalA = d1;
    for(int i = 0; i < m1 - 1 ; i++){
        totalA += daysOfMonth[i];
    }

    int totalB = d2;
    for(int i = 0; i < m2 - 1 ; i++){
        totalB += daysOfMonth[i];
    }

    int diff = totalB - totalA;
    int  i = 0;
    for(; i < 7; i++){
        if(dayOfWeek[i] == A){
            break;
        }
    }
    diff = diff + 6 - i + 1;

    cout << diff / 7 << '\n';

    // Write your code here!

    return 0;
}