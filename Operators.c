#include<stdio.h>
int main(){

    //relational operators 
    //do operators ke buch ka relatiob batata hai

    //total realtional operators are (==,>,>=,<,<=,!=)..

    //for ex to check value (a=b matlab b ko a mein dalre hai par a==b ka matlab hai ki hum yahan puchre hai ki a ki value are b ki value equal hai kya)
     printf("%d\n",4==4);

     //c mein true and false nhi hota instead uski jagah 1 and 0 likha hota hai

     //yeh code ka output 1 ayega because 4 aur 4 equal hote hai


     printf("%d\n",4==3);
     //yeh false hai isliye ans 0 ara hai

     printf("%d\n",4>3);
     printf("%d\n",3>4);
     printf("%d\n",4<4);
     printf("%d\n",4<=4);

     //== aur != yeh dono opposite signs hai

     printf("%d\n",4!=4);
     printf("%d\n",4!=3);

     //logical operator
     //ex are (&& and, || or, ! not)

     printf("%d\n",4>3 && 3>2); //and lagane ke baad agar dono value true hogi fir hi ans true ayega warna ek bhi false hua toh ans pura false.

     // yeh sab same logics in maths 12 wale ch jesa hi hai same 

     //or mein true true true hoga false true true hoga truue false bhi true hoga bas false aur false hi false hoga

     printf("%d\n",!((5>1) && (3>4))); //agge not dala hai humne ! 
     //isliye yeh sab and wagra solve hone ke baad ans fale ane wla tha but not ke wajeeh se wo ulta hogya aur ans true aya 

     //operator presedence matlab priority
     //priority ex left to right 
     //sabse pehle (!),(*,/,%),(+,-),(<,<=,>,>=),(==,!=),(&&),(||),(=); last wla sabse lowest priority

     //assignment operator
     //value ko asign karna like = karta hai b ko a me dalna ex a=b,
     //types of assignmnet operators are (=,+-,-=,*=,/=,%=)

     int a = 1;
     int b = 4;
     a = a + b; // same as a+=b
     //same goes for a-=b jiska matlab hai a =  a-b; same for divide same for multiply

     

     printf("%d\n", a);










    return 0;
}