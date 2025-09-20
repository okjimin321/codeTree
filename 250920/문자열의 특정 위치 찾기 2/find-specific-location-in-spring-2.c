#include <stdio.h>

int main() {
    // Please write your code here.

    char strs[5][50] = {"apple", "banana", "grape", "blueberry", "orange"};

    char alpha;
    scanf("%c", &alpha);
    
    int cnt = 0;
    for(int i = 0; i < 5; i++){
        if((strs[i][2] == alpha) || (strs[i][3] == alpha)){
            cnt++;
            printf("%s \n", strs[i]);
        }

    }

    printf("%d", cnt);
    return 0;
}