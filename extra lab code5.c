// Write a program that takes a character as input and prints its ASCII value.
#include <stdio.h>
int main() {
    char c;
    printf("Enter a character: ");
    scanf("%c", &c);
    printf("ASCII value of %c = %d\n", c, c);
    return 0;
}
