#include <stdio.h>
int main(){
    int m, i, j, s=0, r=0, a, n, count=0;
    printf("Enter a number: ");
    scanf("%d", &n);
    label:
        printf("\nChoose:\n 1: Sum of Individual digits\n 2: Prime or not\n 3: Palindrome or not\n 4: Exit\n");
        scanf("%d", &m);

    switch(m){
        case 1:
            a = n;
            r =0;
            s = 0;
            while(a > 0){
                r = a % 10;
                s = s + r;
                a = a / 10;
            }
            printf("Sum of individual digits: %d", s);
            goto label;
        case 2:
            count = 0;
            for (i = 2; i < n; i++){
                if (n % i == 0){
                    count=count+1;
                }
            }
            if (count > 0){
                printf("%d is not a prime number.",n);
            }
            else{
                printf("%d is a prime number.",n);
            }
            goto label;

        case 3:
            a = n;
            s = 0;
            r = 0;
            while (a > 0){
                r = a % 10;
                s = s*10 + r;
                a = a / 10;
            }
            if (n == s){
                printf("%d is a palindrome number.", n);
            }
            else{
                printf("%d is Not a palindrome number.");
            }
            goto label;

        case 4:
            return(0);
        default:
            printf("Not in menu");
            goto label;
    }
}