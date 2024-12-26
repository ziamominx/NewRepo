#include<stdio.h>
int main(){

    //write a program to find if a charector entered by user is upper case or not

    char ch;

    printf("enter charector : ");
    scanf("%c",&ch);

    if (ch >= 'A'&& ch <= 'Z'){
        printf("upper case");
    }
    else if (ch>= 'a'&& ch<='z'){
        printf("lower case");
    }
    else{
        printf("not an english letter");
    } return 0;
    
    }










