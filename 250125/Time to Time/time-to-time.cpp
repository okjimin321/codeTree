#include <iostream>

using namespace std;

int a, b, c, d;

int main() {
    cin >> a >> b >> c >> d;

    int totalMinA = a * 60 + b;
    int totalMinB = c * 60 + d;

    cout << totalMinB - totalMinA;
    // Write your code here!

    return 0;
}