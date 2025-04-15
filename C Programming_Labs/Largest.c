#include <stdio.h>

void findLargest(int *num1, int *num2) {
    if (*num1 > *num2) {
        printf("LARGEST=%d",*num1);
        
    } else {
        printf("largest =%d" ,*num2);
    }
}

int main() {
    int num1 = 10, num2 = 20, largest;
    findLargest(&num1, &num2);
    return 0;
}
