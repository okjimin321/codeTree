#include <iostream>

using namespace std;

int N, K, P, T;
int t[250]{};
int x[250]{};
int y[250]{};

class Developer{
public:
    int idx;
    bool infected;
    int infect_count;

    Developer(){
        idx = -1;
        infected = false;
        infect_count = -1;
    }

    Developer(int idx, int infect_count):
        idx{idx}, infect_count{infect_count}, 
        infected{false}{}

    void setInfected(){
        infected = true;
    }    

    void setInfect(){
        if(infect_count > 0){
            infect_count--;
        }
        else{
            //cout << "Cannot infect more!!\n";
        }
    }
};


int main() {
    cin >> N >> K >> P >> T;

    //setting developers
    Developer developers[N]{};
    for(int i = 0; i < N; i++){
        developers[i] = Developer(i, K);
    }
    //setting outbreak
    developers[P - 1].setInfected();
    
    //T cases
    for (int i = 0; i < T; i++) {
        cin >> t[i] >> x[i] >> y[i];

    }

    int cases[T]{};

    for(int i = 0; i < T; i++){
        int s = t[0];
        int s_idx = 0;
        for(int j = 1; j < T; j++){
            if(s > t[j]){
                s = t[j];
                s_idx = j;
            }
        }
        t[s_idx] = 999;
        cases[i] = s_idx;
    }

    //check who is infected
    for(int j = 0; j < T; j++){

        int i = cases[j];
        //no infor
        if(t[i] == 0){
            continue;
        }

        if(developers[x[i] - 1].infected == true){

            //parter is uninfected
            if(developers[y[i] - 1].infected == false){
                if(developers[x[i] - 1].infect_count > 0)
                    developers[y[i] - 1].setInfected();
            }
            else{
                developers[y[i] - 1].setInfect();
            }

            developers[x[i] - 1].setInfect();
        }

        else{
            if(developers[y[i] - 1].infected == true){
                if(developers[y[i] - 1].infect_count > 0){
                    developers[x[i] - 1].setInfected();
                }
                developers[y[i] - 1].setInfect();
            }
        }
    }

    for(int i = 0; i < N; i++){
        cout << developers[i].infected;
    }

    return 0;
}