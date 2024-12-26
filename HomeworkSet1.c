// Questions are:-
// a. Write a program to calculate perimeter of rectangle. Take sides, a & b, from the user.
// b. Take a number(n) from user & output its cube(n*n*n). 
// c. Write comments for programs a & b

#include<stdio.h>
int main(){

    int a,b;
    printf("enter length : ");
    scanf("%d",&a);
    printf("enter breadth : ");
    scanf("%d",&b);

    printf("the perimeter of thw given rectangle is : %d\n",(a+b)*2);

    
    int n;
    printf("enter number : ");
    scanf("%d",&n);

    printf("the cube of number is : %d\n",n*n*n);
    
    return 0;
}

//comments for programe a and b 