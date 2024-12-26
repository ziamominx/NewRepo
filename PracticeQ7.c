#include<stdio.h>
int main(){

    //are the following valid or not?
    //Q1= int a= 8^8;
    //Q2= int x; int y = x;
    //Q3= int x, y = x;
    //Q4= har stars = '**';

    printf("%d\n",8^8) ; //^ power ki sign nhi mani jati c mein isliye ans 0 ara hai par ans valid hai bc of no errors

    int x; int y=x; //valid

    ///Q3 me terminator ki jagha coma hai isliye x aur x dono ek hi line me arar hai joh obv invalid hoga

    char starts='**'; //yahan pe multiple char hai isliye error ayega and thus it is invalid 
    

    return 0;
}