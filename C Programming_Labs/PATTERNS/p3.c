#include <stdio.h>
int main(){
    int i,j, k;
    for (i = 1; i <= 5; i++){
        k = 65;
        for (j = 1; j <= i; j++){
            printf("%c ", k);
            k++;
        }
        printf("\n");
    }
}