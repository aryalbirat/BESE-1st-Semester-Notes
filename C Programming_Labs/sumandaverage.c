#include <stdio.h>
int main(){
    int n, a, sum=0,i;
    float avg=0;
     printf("Enter how many numbers you want: ");
    scanf("%d", &n);
    for (i = 1; i <=n; i++){
        printf("Enter a number: ");
        scanf("%d", &a);
        if(a < 0){
           goto label;
           break;
        }
        else{
            sum =sum+a;
            avg=(float)sum/n;
            continue;
        }
    }
    label:
        printf("SUM IS %d", sum);
         printf("\nAVERAGE IS %.2f",avg);
}