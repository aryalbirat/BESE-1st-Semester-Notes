#include <stdio.h>
int main(){
    int ch;
    label:
        printf("Enter your choice: ");
        scanf("%d", &ch);
    switch(ch){
        case 1:
            printf("Sunday");
            break;
        case 2:
            printf("Monday");
            break;
        case 3:
            printf("Tuesday");
            break;
        case 4:
            printf("Wednesday");
            break;
        case 5:
            printf("Thursday");
            break;
        case 6:
            printf("Friday");
            break;
        case 7:
            printf("Saturday");
            break;
        default:
            printf("Please input number between 1 and 7\n");
            goto label;

    }
}