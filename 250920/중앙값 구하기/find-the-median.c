#include <stdio.h>

int main() {
    // Please write your code here.
    int a, b, c;
    scanf("%d %d %d", &a, &b, &c);

    int ans;
    if(a < b){
        if(a < c)
            if(b < c)
                ans = b;
            else if(c < b)
                ans = c;
        else if(c < a)
            ans = a;
    }
    else if(b < a){
        if(b < c)
            if(a < c)
                ans = a;
            else if(c < a)
                ans = c;
        else if(c < b)
            ans = b;
    }   

    printf("%d", ans);
    return 0;
}