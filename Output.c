# include<stdio.h>

int main(){

    printf("Hello Zia");
    printf("Hello Zia");
    printf("Hello Zia");
    printf("Hello Zia");

//to prit hello zia new in every line you have to add backslash n.

printf("Hello Zia\n");
printf("Hello Zia\n");
printf("Hello Zia\n");
printf("Hello Zia\n");

//to print any variable put %d
//for real numbers put %f
//for charectors put %c

//these all are called format specifiers

int age = 22;
printf("int age\n"); // yeh wrong hai
printf("age is=%d\n",age); // yeh sahi hai due to %d

float pi = 3.14;
printf("pi is=%f\n",pi);

char star = ' *';
printf("char = %c\n",star);

return 0;

}