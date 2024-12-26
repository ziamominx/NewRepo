#include<stdio.h>
#include<math.h>

int main(){

    int a = 1.999999;
    printf("%d\n", a);
     //we can see that the output is 1 instead of riunding it off to 2, therefore in C the language do not roundoff and completely remive the decimal value in int data.

     //naya Q of pricidence or priority jisme qs hai 
     //5*2-2*3, 5*2/2*3, 5*(2/2)*3, 5+2/2*3

     int b = 5*2-2*3;
     printf("%d\n",b);

     int c = 5*(2/2)*3; //brackets ko sabse zyada priority milri hai just as bodmass.
     printf("%d\n",c);

     int d = 5+2/2*3;
     printf("%d\n",d);
        
    return 0;
}