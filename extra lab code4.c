#include <stdio.h>
int main()
 {
    int num;  // int = keyword, num = identifier
    printf("enter the number: ");
    scanf("%d",&num);
    while (num > 0) {   // while = keyword
        if (num % 2 == 0) {  // if = keyword
            printf("%d is even\n", num);
        } else {
            printf("%d is odd\n", num);
        }
        }
    return 0;  // return = keyword
}
