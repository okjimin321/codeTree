#include <stdio.h>

int main() {
    // Please write your code here.
    int a,b,c;

    scanf("%d %d %d", &a, &b, &c);

    int sum = a + b + c;
    int mid = sum / 3;

    printf("%d \n%d \n%d", sum , mid, sum - mid);
    return 0;
}