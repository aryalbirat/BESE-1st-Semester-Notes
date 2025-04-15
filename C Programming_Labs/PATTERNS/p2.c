#include <stdio.h>
int main(){
    int i,j, k=1, space;
    for (i = 1; i < 5; i++){
        for (space = 1; space <= 5-i; space++){
            printf(" ");
        }
        for (j = 1; j <= k; j++){
                printf("*");
        }
        for (space = 1; space <= 5-i; space++){
            printf(" ");
        }
        k += 2;
        printf("\n");
    }
}