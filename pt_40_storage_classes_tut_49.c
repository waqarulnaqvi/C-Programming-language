//A storage class define a scope,default initial value & lifetime of a variable..
//c program is a low-level programming language..
//c program me jo sabse badi cheez humare haath me hoti hai wo hai memory..

//LOcal Variable/auto storage class:
//by default storage is auto..
// auto int k=34;
// int k=34;
//Both are same..

// External Storage/ global variable:
//Global variable is also called as external variable..
//int harry written outside any function will tell compiler that harry is a global variable..
//It is recommended to minimize the use of unnecessary global variables in a program..

// External variable:EXTERN KEYWORD:
//extern keyword is used to inform our C compiler that a given variable is declared somewhere else..
//Using extern will not allocate space for the variable.. 

//Static Variables:Static Storage Class:
//Scope:Local to the block they are defined in..
//Default Initial Value:0..
//Lifetime:They are available throughout the lifetime of the program..
//A static variable remains under existence for use within the function for entire program run..
//static int harry written inside any function will tell compiler that harry is a static variable..
//It is recommended to minimize the use of unneccessary static variable in a program..

 //global or static variable memory kha kar beithe rehte hai isliye recommend kiya jaata hai inka kam se kam istemal kiya jaaye program me.. 

 //Register Variables:Register Storage Class:
//Scope:Local to the function they are declared in..
//Default Initial Value:Garbage value..
//Lifetime:They are available till the end of the function block,in which the variable is defined..
//Register variable requests the compiler to store the variable in the CPU register instead of storing in the memory to have faster access..
//Generally this is done for the variables which are being used frequently..
#include <stdio.h>
#include <string.h>
#include "pt_40_External.c"

int sum1(int a,int b)
{
    extern int sum;//exten keyword se hum global variable use kar sakte hai function me //yeah samaj jaayega ki hum global varible sum ki baat kar rhe hai..
  //or agar hum sum na declare karre tab bhi function samajh jaayega ki hum global variable  ki baat kar rhe hai but tabhi jab global variable function se pehle defined ho agar function se baad define hoga global variable tab extern lagana must hai.. 

    //By default storage class is auto storage class..
    // auto int sum;//same
    // int sum;//same
    sum=a+b;
    return sum;
    }
    int sum =567;//global variable default value is 0..
// global variable is also called as external variable because it is defined by external storage class..

 void var()
{
    static int s;//static variable default value is 0 like a global variable..
    printf("The value of var %d\n", s); // 
    s++;
}
int main()
{
    //Declaration - Telling the compiler about the variable (NO space reserved)..
    //Definition - Declaration + space reservation..
    register int sum =sum1(2,4);//register storage class aapko cpu register me value save karne ki soovida pradan karti hai register ek fastest class hoti hai cpu me or humesha zarruri ni hai ki aapkne register storage class declare kardi to wo value register me save ho jaaye yeah depend karta hai cpu priority pe..
    // int k;//local variable default value is garbage value..
    // printf("The sum is %d and k is %d",sum,k);
    printf("The sum is %d\n ",sum);
    int a=generateRandomNumber();
    printf("The random number is between 1 to 3 is %d\n",a);
    var();
    var();
    var();
    var();
    var();
    return 0;
}
