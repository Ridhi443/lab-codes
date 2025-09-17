// Write a program that prints the size (in bytes) of int, float, char, double, and long long using sizeof operator.
#include <stdio.h>
int main() 
{
    int int_size = sizeof(int);
    int float_size = sizeof(float);
    int char_size = sizeof(char);
    int double_size = sizeof(double);
    int longlong_size = sizeof(long long);

    printf("Size of int: %d bytes\n", int_size);
    printf("Size of float: %d bytes\n", float_size);
    printf("Size of char: %d bytes\n", char_size);
    printf("Size of double: %d bytes\n", double_size);
    printf("Size of long long: %d bytes\n", longlong_size);
 return 0;
}
