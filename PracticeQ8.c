#include<stdio.h>
int main(){

    //print true or false for the following statements(0,1)
    //Q1 = if its sunday & its snowing -> true
    //Q2 = if its monday or its raining -> true
    //Q3 = if the number is greater than 9 & less than 100-> true
    //(2 digit number)

    int isSunday = 1;
    int isSnowing = 1;
    printf("%d\n", isSunday && isSnowing);

    int isMonday = 0;
    int isRaining = 1;
    printf("%d\n", isMonday || isRaining);

    int x;
    printf("enter number : ");
    scanf("%d",&x);
    printf("%d\n", x>9 && x<100);
    

    return 0;
}