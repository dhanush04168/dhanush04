#include <stdio.h>

int main() {
    int num, temp, rem;
    int sum = 0;

    printf("Enter a number: ");
    scanf("%d", &num);


    temp = num;


    while (num > 0) {
        rem = num % 10;     
        sum = sum + rem;   
        num = num / 10;     
    }

    printf("Sum of digits of %d is: %d\n", temp, sum);

    
}