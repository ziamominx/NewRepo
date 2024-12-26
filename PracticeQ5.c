#include<stdio.h>
int main(){
    //question is writ ea program to check is a number is divisible by 2 or not
    int x;
    printf("enter a number : ");
    scanf("%d", &x);
    printf("%d", x %2 == 0);
    
    return 0;
}