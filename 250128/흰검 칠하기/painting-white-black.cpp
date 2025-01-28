#include<vector>
#include <iostream>

#define N 1000
#define M 100
#define OFFSET 100000
using namespace std;


int n;
int x[N];
char dir[N];

struct Coordinate {
    int wNum, bNum;
    int location;
    vector<char> color;

    Coordinate() {
        location = -1;
        wNum = bNum = 0;
    }

    void setLocation(int loc) {
        this->location = loc;
    }

    void addColor(char color) {
        this->color.push_back(color);
        if (color == 'B') {
            bNum++;
        }
        else {
            wNum++;
        }
    }

    int getColor() {
        //no color;
        if (color.size() == 0) {
            return -1;
        }
        //Gray
        else if (wNum >= 2 && bNum >= 2) {
            return 1;
        }
        //White
        else if(color[color.size() - 1] == 'W') {
            return 2;
        }
        //Black
        else if(color[color.size() - 1] == 'B'){
            return 3;
        }
    }
};

int main() {
    cin >> n;

    //initialize section
    vector<Coordinate> vertical;
    for (int i = 0; i < OFFSET * 2; i++) {
        vertical.push_back(Coordinate());
    }

    int preLocation = OFFSET;
    //vertical[OFFSET].setLocation(OFFSET);

    for (int i = 0; i < n; i++) {
        int x;      
        char d;
        cin >> x >> d;

        while (x--) {
            if (d == 'R') {
                vertical[preLocation].setLocation(preLocation);
                vertical[preLocation].addColor('B');
                preLocation++;
            }
            else if (d == 'L') {
                vertical[preLocation].setLocation(preLocation);
                vertical[preLocation].addColor('W');
                preLocation--;
            }
        }
        
        if (d == 'R') {
            preLocation--;
        }
        else {
            preLocation++;
        }

    }

    int g, w, b;
    g = w = b = 0;
    for (int i = 0; i < OFFSET * 2; i++) {
        int state = vertical[i].getColor();

       
        //Gray
        if (state == 1) {
            g++;
        }
        //White
        else if (state == 2) {
            w++;
        }
        //Black
        else if(state == 3){
            b++;
        }
    }
    cout << w << " " << b << " " << g << '\n';

    // Write your code here!

    return 0;
}