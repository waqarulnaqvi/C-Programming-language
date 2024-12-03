//Variable name is a CamelCaseConvention method..
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
int Sum(int a,int b)
{
    return a+b;
}
// void  Sum(int a,int b)//if function type is void than we can't assign function/function value to the function pointer it will through an error..
// {
//     printf("%d\n",a+b);
// }
void greet()//if function type is void than we can't assign function/function value to the function pointer it will through an error..
{
    // printf("Hello World my user good morning%d..\n");//print address in place of %d value..
    printf("Hello World my user good morning..\n");
}
int greet1()
{
    printf("Hello World my user good morning..\n");
    return 0;
}
// void greet2(int a)//if function type is void than we can't assign function/function value to the function pointer it will through an error..
// {
//     printf("Hello World my user good morning..\n");
// }
int greet2(int a)
{
    printf("Hello World my user good morning..\n");
}
int main()
{
    // printf("Sum is %d\n",Sum(1,2));//Testing the function..

//if function type is void than we can't assign function/function value to the function pointer it will through an error..
    int (*fptr) (int,int);//Declaring a function pointer..
    fptr=&Sum;// Creating a function pointer..
    // fptr=&greet;//Error because function type is void than we can't assign function/function value to the function pointer it will through an error..
    // fptr=&greet1;//Run but greet1 function value is different so output value of the function is different..
    // fptr=&greet2;//Error..
    int d=(*fptr)(4,6);//Dereferencing or direction a function pointer..
    printf("The value of d is %d\n",d);
    printf("The value of sum is %d\n",(*fptr)(4,6));
    printf("The value of sum is %d\n",(*fptr)(6,6));
    // printf("The value of sum is %d\n",(*fptr));//print address instead of value..
    greet();

// int (*fptr1) ;//Error..
int (*fptr1) ();//Run..
// int (*fptr1) (,);//Error..
// int (*fptr1) ( , , );//Error..
// int (*fptr1) ( , , ,);//Error..
// int (*fptr1) ()();//Error..
// fptr1=&greet;//Error..
fptr1=&greet1; //Run..

// int (*fptr2) int;//Error..
// int (*fptr2) ();//Run but it may problem after assinging value to the function pointer..
// int (*fptr2) ()();//Error..
// int (*fptr2) (,);//Error..
// int (*fptr2) ( , , );//Error..
// int (*fptr2) ( , , ,);//Error..
int (*fptr2) (int);//Run..
// int (*fptr2) (int,int);//Error..
fptr2=&greet2;

    return 0;
}