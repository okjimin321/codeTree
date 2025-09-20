#include <stdio.h>

#define SOL 25

int main() {
    // Please write your code here.
    
    int a;
    do{
        scanf("%d", &a);

        if(a < SOL)
            printf("Higher\n");
        else if(a > SOL)
            printf("Lower\n");
    }while(a != SOL);
    printf("Good\n");

    return 0;
}