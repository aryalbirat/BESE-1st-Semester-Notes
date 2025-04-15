#include <stdio.h>
int main(){
    int i,j;
    for (i = 1; i < 10; i++){
        if (i < 6){
            for (j = i; j <= 5; j++){
                printf("* ");
            }
        }
        else{
            for (j = i-5; j >= 0; j--){
                printf("* ");
            }
        }
        printf("\n");
    }
}