#include <iostream>

using namespace std;

int a, b, c;

// int main() {
//     cin >> a >> b >> c;

//     int totalMin = 0;
//     // Write your code here!
//     if(a < 11){
//         totalMin = -1;
//     }
//     else if(a == 11){
//         if(b < 11){
//             totalMin = -1;
//         }
//         else if(c < 11){
//             totalMin = -1;
//         }
//         else{
//             totalMin = (a - 11) * 24 * 60 + (b - 11) * 60 + c - 11;
//         }
//     }
//     else{
//         totalMin = (a - 11) * 24 * 60 + (b - 11) * 60 + c - 11;
//     }

//     cout << totalMin << '\n';
//     return 0;
// }

int main(){
    cin >> a >> b >> c;

    int diff = ((a * 24 * 60) + (b * 60) + c) - ((11 * 24 * 60) + (11 * 60) + 11);

    if(diff >= 0)
        cout << diff << '\n';
    else{
        cout << -1 << '\n';
    }
}