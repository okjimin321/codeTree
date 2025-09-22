#include <stdio.h>

int main() {
    // Please write your code here.
    int s, e;
    scanf("%d %d", &s, &e);

    int ans = 0;
    for(int i = s; i <= e; i++){
        int cnt = 0;
        for(int j = 1; j <= i; j++){
            if(i % j == 0)
                cnt++;
        }

        if(cnt == 3)
            ans++;
    }

    printf("%d", ans);
    return 0;
}