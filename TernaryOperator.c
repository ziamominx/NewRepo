//conditional operator 
//ternary operator

#include<stdio.h>
int main(){

    int age;
    printf("enter age : ");
    scanf("%d",&age);

    age>=18 ? printf("adult") : printf("not adult"); //use this only in single statement


    return 0;
}