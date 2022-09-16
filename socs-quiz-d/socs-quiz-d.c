#include <stdio.h>
#include <stdlib.h>

int main(){

    int i, A, B, C = 0;

    scanf("%d %d", &A, &B);

    i = A;

    while(i <= B){
        C = C + i;
        i++;
    }

    printf("%d", C);

    return 0;
}
