#include <stdio.h>
#include <string.h>

int main() {
    // Please write your code here.
    char arr[100];
    scanf("%s", &arr);
    int arr_len = strlen(arr);

    arr[1] = 'a';
    arr[arr_len - 2] = 'a';

    printf("%s", arr);

    return 0;
}