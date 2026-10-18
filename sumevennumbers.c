#include<stdio.h>
int main(){
    int n;
    int  sum = 0;
    printf("enter the number\n");
    scanf("%d", &n);

    for (int i = 2; i <= n; i += 2){
        sum = sum + i;
    }
    printf("sum of even numbers up to %d is: %d\n", n, sum);
}