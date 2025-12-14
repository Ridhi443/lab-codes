/*
Count the number of words in the given string.
*/

#include <stdio.h>

int main() {
    char str[100];
    int count = 0, i;

    printf("Enter a string: ");
    fgets(str,100,stdin);  

    for (i = 0; str[i] != '\0'; i++) {
        if ((i == 0 && str[i] != ' ') ||
            (str[i] != ' ' && str[i - 1] == ' ')) {
            count++;
        }
    }

    printf("Number of words = %d", count);
    return 0;
}
