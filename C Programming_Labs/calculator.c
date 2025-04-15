#include <stdio.h>
int main(){
    int a, b, m;
    printf("Enter two numbers: ");
    scanf("%d %d", &a, &b);
    label:
        printf("Choose: 1: Add\n 2: Subtract\n 3: Multiply\n 4: Divide\n");
        scanf("%d", &m);
    switch(m){
        case 1:
            printf("Sum: %d", a+b);
            break;
        case 2:
            printf("Subtraction: %d", a-b);
            break;
        case 3:
            printf("Multiply: %d", a*b);
            break;
        case 4:
            printf("Division: %.2f", (float)a/b);
            break;
        default:
            printf("Choose numbers given in the menu.\n");
            goto label;
    }
}