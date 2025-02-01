#include <iostream>
#include<queue>
using namespace std;

int N, K, P, T;

struct Event{
    int time;

    int x_idx;
    int y_idx;

    Event(int t, int x, int y){
        time = t;
        x_idx = x;
        y_idx = y;
    }

    bool operator<(const Event& other) const{
        return time > other.time;
    }
};

int main() {
    cin >> N >> K >> P >> T;

    priority_queue<Event> q;
    for (int i = 0; i < T; i++) {
        int t;
        int x, y;
        cin >> t >> x >> y;

        Event e(t,x,y);
        q.push(e);
    }


    int infect_count [N + 1]{};
    bool developers[N + 1]{};
    developers[P] = true;

    for(int i = 1; i <= T; i++){
        int x = q.top().x_idx;
        int y = q.top().y_idx;
        q.pop();

        if(developers[x] == true){
            infect_count[x]++;
        }

        if(developers[y] == true){
            infect_count[y]++;
        }

        if(developers[x] && infect_count[x] <= K){
            developers[y] = true;
        }

        if(developers[y] && infect_count[y] <= K){
            developers[x] = true;
        }
    }

    for(int i = 1; i <= N; i++){
        cout << developers[i];
    }


    return 0;
}