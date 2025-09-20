#include <stdio.h>

int main() {
    // Please write your code here.

    int a;
    scanf("%d", &a);

    char* ans = "false";
    if((a % 2 != 0 && a % 3 == 0) || (a % 2 == 0 && a % 5 == 0))
        ans = "true";

    printf("%s", ans);
    return 0;
}