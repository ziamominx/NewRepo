#include<stdio.h>
int main(){


    //question is write a program to give grades to a sudent
    //marks < 30  is c
    //30 <= marks <70 is b 
    //70 <= marks <90 is a
    //90 <= marks <100 is a+

    int marks;
    printf("enter marks : ");
    scanf("%d",&marks);

    if(marks<30){
        printf("C\n");

    }
    else if(marks >= 30 && marks<70){
        printf("B\n");

    }
    else if(marks >= 70 && marks<90){
        printf("A\n");

    }
    else{
        printf("A+\n");
    }


    return 0;

}