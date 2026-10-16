#include <stdio.h>

int main() {
    int num;
    printf("Enter a number: ");
    scanf("%d", &num);

    
    if (num % 2 == 0 && num > 20) {
        printf("Yes, it is even and greater than 20!\n");
    } else {
        printf("Condition not satisfied.\n");
    }

    return 0;
}