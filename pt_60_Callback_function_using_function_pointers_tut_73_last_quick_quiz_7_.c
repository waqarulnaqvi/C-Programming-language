//pointer is also a variable which also has a address which  basically can points and store  the address  of other pointer/variable..
//Variable name is a CamelCaseConvention method..
// #include <stdio.h>
// int Sum(int a,int b)
// {
//     return a+b;
// }
// void greet()
// {    
//     printf("Hello World my user good morning..\n");
// }

// // int greetHelloandExecute(int (*fptr) (int ,int ))//Run..//fptr is a function pointer which take integer as an input and return an integer..
// int greetHelloandExecute(int (*fptr) (int a,int b))//Run..//fptr is a function pointer which take integer as an input and return an integer..
// {
//     printf("\nHello  user ..\n");
//     printf("The sum of 5 and 7 is %d",fptr(5,7));
//     return 0;
// }

//// int greetGmandExecute(int (*fptr) (int ,int ))//Run..//fptr is a function pointer which take integer as an input and return an integer..
//// {
// int greetGmandExecute(int (*fptr) (int a,int b))//Run..//fptr is a function pointer which take integer as an input and return an integer..
// {
//     printf("\nHello World my user good morning..\n");
//      printf("The sum of 5 and 7 is %d",fptr(5,7));
// }
// int main()
// {
    
//     // int (*fptr) (int,int);//Declaring a function pointer..
//     int (*fptr) (int a,int b);//Declaring a function pointer..
//     // int *fptr (int ,int );//Error because than compiler thought that it is a function whose name is ptr and it take 2 inputs and it return pointer to interger.. 
//     // int *fptr (int a,int b);//Error because than compiler thought that it is a function whose name is ptr and it take 2 inputs and it return pointer to interger.. 
//      fptr=&Sum;//same because fptr take an address of the function..
//    //  fptr=Sum;//same because fptr take an address of the function..
//      greetGmandExecute(fptr);
//      greetHelloandExecute(fptr);
//     return 0;
// }


/* last_quick_quiz_7:
WAP to make a function greetgoodevening() and greetgoodafternoon() which take average of 2 number to the user..
*/


#include <stdio.h>
int Avg(int a,int b)
{
    return (a+b)/2;
}
void greet()
{    
    printf("Hello World my user good morning..\n");
}

// int greetgoodafternoon(int (*fptr) (int ,int ),int a,int b)//Run..
// {
int greetgoodevening(int (*fptr) (int a,int b),int a ,int b)//Run..
{
    printf("\nHello World my user good evening..\n");
    printf("The Average of %d and %d is %d",a,b,fptr(a,b));
    return 0;
}


// int greetgoodafternoon(int (*fptr) (int a,int b),int a,int b)//Run..
// {
int greetgoodafternoon(int (*fptr) (int ,int ),int a,int b)//Run..
{
    printf("\nHello World my user good afternoon..\n");
       printf("The Average of %d and %d is %d",a,b,fptr(a,b));
}
void main()
{
    

    int (*fptr) (int ,int );//same..//Declaring a function pointer..
    // int (*fptr) (int a,int b);//same..//Declaring a function pointer..
   int a,b;
   printf("Enter a  number 1:");
   scanf("%d",&a);
   printf("Enter a  number 2:");
   scanf("%d",&b);
   
     fptr=&Avg;//same..
    //  fptr=Avg;//same..
     greetgoodevening(fptr,a,b);
     greetgoodafternoon(fptr,a,b);
    // return 0;
}
