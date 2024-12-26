#include<stdio.h>
#include<math.h>
 int main(){

    //in arithmetic for example a+b therefore a and b will be operands and the plus sign + is the operator
    // only single variable on LHS.. for ex we cannot put int x,y = a*b.. this is wrong.. in this the value is only stored in Y..

    int  a = 2, b = 2;
    int sum  = a+b;
    int multiply = a*b;

    //in arithmetic operattors we have (+, -, *, /, %)
    //in this a=b+c is right but b+c = a is wrong..

    //for power we have to write pow(b,c); instead of b^c..

    //plus we have to write #inclide<math.h> below the #include<stdio.h>
    

    int power = pow(a,b);
    printf("%d\n",power);

    //modular operator (%) yeh reminder batata hai division ka.

    printf("%d\n", 20%10);
    
    //modular operator works onlly onn intiger not on float or decimal value
    //modular operator can also work by putting negative value.

    printf("%d\n",-25%5);


    //type conversion

    //int ka operaton int ke sath hua toh ans int me ayega
    //int ka op float ke sath hua toh ans float me ayega just because float stores more data
    //float ka op float ke stah hua toh ans ayega float.

    printf("%f\n",2.0 * 4); //agar ham decimal dere hai value me toh data bhi float ka dalo which is %f

    printf("%f\n", 15/5.0);

    printf("%d\n", 3/2); // exact ans chiaye toh float me dalo
    printf("%f\n", 3.0/2);

    //operator presedence (example maths me bodmass rule)
    //waise hi C mein priority sabse zyada (*,/,%) multiply, divide. modular operator ko dii jati hai
    //uske baad (+,-) plus aur minus ko dii jati hai
    //fir last me (=) eqaul to or C me isko assignment operator bhi kehtein hai.

    int x = 4+9*10; //so isme C sabse pehle multiply karega fir add karega isliye ans 94 aya instead of pehla add karne ke fir multiply jiska ans 130 hota joh galat hai
    printf ("%d\n",x);

    //agar Q hai x=4*3/6*2
    //toh usme priority dono side me equal hai so ans hamesha ek rule follow karega tab
    //Associativity rule (for same precedence)
    //isme agar obs same hai so ans hamesha left to right calculate hoga.
    //isme bas ek chiz bodmass jaisi same hai ki C aur Bodmass dono pehle brackets ko solve karenge fir baki priority.

    int y = 4*3/6*2;
    printf("%d\n",y);
    //isme ans 4 aya bc of left to right jisme pehle 4*3 hua fir 12/6 hua fir 2*2 hua which sumup as 4.
    

    return 0;

 }