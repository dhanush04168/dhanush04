/* Factorial of a Number
3. Factorial of a Number
Task: Take a positive integer Task: Take a positive integer unsigned unsigned long long long long is negative.
is negative.
Sample Input: 5
Sample Input: 5
Sample Output: Factorial = 120*/
#include <stdio.h>
int main() {
    unsigned long long int n, factorial = 1;
    printf("Enter a positive integer: ");
    scanf("%llu", &n);

    if (n < 0) {
        printf("Error! Factorial of a negative number doesn't exist.\n");
    } else {
        for (unsigned long long int i = 1; i <= n; ++i) {
            factorial *= i;
        }
        printf("Factorial = %llu\n", factorial);
    }

    
}