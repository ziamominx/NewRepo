//Question is, write a program to calculate area of a square (side is given)

//area  of a square 

# include<stdio.h>

int main(){
     int side;

     printf("enter the side of a square : ");
     scanf("%d",&side);

     printf("the area of a square is : %d ", side*side);
     //square area is always side*side so if we put any one side we can get the ans 

     return 0 ;

}