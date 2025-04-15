#include <stdio.h>
int main(){
    int i,j, count;
    for (i = 50; i<= 150; i++){
        count = 0;
        for (j = 2; j < i; j++){
            if (i % j == 0){
                count++;
            }
        }
        if (count == 0){
            printf("%d\t", i);
        }
    }
}