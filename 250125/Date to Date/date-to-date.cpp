#include <iostream>

using namespace std;

int m1, d1, m2, d2;

const int daysOfMonth[12] = {31,28,31,30,31,30,31,31,30,31,30,31};

int main() {
    cin >> m1 >> d1 >> m2 >> d2;

    // Write your code here!
    int totalDaysOfa = d1;
    int totalDaysOfb = d2;

    for(int i = 0; i < m1; i++){
        totalDaysOfa += daysOfMonth[i];
    }

    for(int i = 0; i < m2; i++){
        totalDaysOfb += daysOfMonth[i];
    }

    cout << -totalDaysOfa + totalDaysOfb;
    return 0;
}