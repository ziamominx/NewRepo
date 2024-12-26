// // Questions are:-
// //  a. Write a program to print the average of 3 numbers.
// //  b. Write a program to check if given character is digit or not.
// //  c. Write a program to print the smallest number of two.

// #include<stdio.h>
// int main(){

//     int a,b,c;
//     printf ("enter a your first num : ");
//     scanf("%d",&a);
//     printf ("enter a your second num : ");
//     scanf("%d",&b);
//     printf ("enter a your third num : ");
//     scanf("%d",&c);

//     printf("average of all three nums are : %d\n",(a+b+c)/3);

//     return 0;

// }

// #include<stdio.h>
// int main(){

//     char ch;
//     printf("enter your char : ");
//     scanf("%c",&ch);

//     if(ch>='0' && ch<='9'){
//         printf("char is digit : %c",ch);

//     }
//     else{
//         printf("char is not digit : %c",ch);

//     }

//     return 0;
// }

#include<stdio.h>
int main(){
    int a,b;
    printf("enter number one : ");
    scanf("%d",&a);
    printf("enter number two : ");
    scanf("%d",&b);

    if (a<b){
        printf("the smallest num is : %d\n",a);
    }
    else if (a>b){
    printf("the smallest num is : %d\n",b);
    }

    else if (a==b){
        printf("the given numbers are same : %d\n",a=b);
    }
    
    else {
        printf("the number is not valid\n");
    }



    return 0;
}

