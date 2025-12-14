#include <stdio.h>

int x = 10;   // global variable

void show() {
    int x = 20;   // local variable
    printf("Inside function, local x = %d\n", x);
}

int main() {
    show();
    printf("Outside function, global x = %d\n", x);
    return 0;
}
