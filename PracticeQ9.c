#include<stdio.h>
int main(){
    //Q is write a program to check is the student pass or failed
    //marks >30 is pass
    //marks <30 is fail

    int marks;
    printf("enter marks : ");
    scanf("%d",&marks);

    // if(marks>30&&marks<=100){
    //     printf("passed\n");

    // }
    // else if(marks >=0&&marks<=30){
    //     printf("failed\n");
    // }
    // else{
    //     printf("marks is not valid\n");
    // }

    marks <= 30 ? printf("fail\n") : printf("pass\n");





        return 0;
}