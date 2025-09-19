#include <stdio.h>

int main() {
    // Please write your code here.

    const int arr_size = 3;
    double arr[arr_size];
    scanf("%lf %lf %lf", &arr[0], &arr[1], &arr[2]);

    for(int i = 0; i < arr_size; i++){
        printf("%.3lf\n", arr[i]);
    }

    return 0;
}