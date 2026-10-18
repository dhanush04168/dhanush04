#include<stdio.h>
int main(){

    int x, y;
    int result = 1;
    printf("enter base(x) exponenet (y)");
    scanf("%d %d",&x, &y);

    for(int i = 1; i <= y; i++){
        result = result * x;
    }
    
    printf("output is: %d",result);

}