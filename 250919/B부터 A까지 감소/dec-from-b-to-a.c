#include <stdio.h>

int main() {
    // Please write your code here.

    int a, b;
    scanf("%d %d", &a, &b);

    for(int i = b; i >= a; i--)
        printf("%d ", i);
    return 0;
}