#include<stdio.h>

void func() {
    int myVariable = 0;
    myVariable++;
    printf("myVariable is %d\n", myVariable);
}

int main(void) {
    func();
    func();
    return 0;
}
