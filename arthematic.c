/*Question
Write a C program that takes two integers from the user, calculates their sum, and checks whether the sum is strictly greater than 50.*/
#include<stdio.h>
int main(){

    int num1 , num2, num3;
    printf("Enter two integers: ");
    scanf("%d %d", &num1, &num2);
    num3 = num1 + num2;
    if(num3 > 50){
        printf("The sum of %d and %d is %d,  greater than 50.\n", num1, num2, num3);
    } else {
        printf("The sum of %d and %d is %d, lessthan 50.\n", num1, num2, num3);

    }
}