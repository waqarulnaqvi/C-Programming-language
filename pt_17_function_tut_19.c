// function is also called as procedure & subroutine..
// debugging means:- the process of identifying and removing errors from computer hardware or sofware. "software debugging"..
//we can easily debug a program using functions..
/*there are 2 types of functions in c:-
1.library functions like printf ,scanf etc which include in header file..
#you don't need to declare or define library function..

2.user define function which doesn't include in header file..
#you need to declare or define user define function..
#user define function created by c programmer to reduce complexity of the program..
*/
#include <stdio.h>
int printfuc1();
void printfuc2();
void printstar(int n)
{
    for (int i = 0; i < n; i++)
    {
        // printf("%c","*");//" " code is string print hoga (D n times print hoga)..
        // ' ' code se character print hoga..
        printf("%c",'*');
    }
    
}
int sum (int a, int b);
int main()
{
    int a ,b,c;
    a=3;
    b=44;
    // c =sum(a,b);
    // printf("The sum is %d\n",c);
    // printstar(7);
   printf("factorial is %d\n", printfuc1());
//    printf("The value is %d\n", printfuc2());//Error because function return type is void..
printfuc2();
}
int sum(int a ,int b)
{
    return a+b;
}
int printfuc1()
{
    int count,k=1;
    printf("Enter a number :");
    scanf("%d",&count);
    for (int i = 1; i <= count; i++)
    {
        k*=i;
}
return k;
}
void printfuc2()
{
    int count;
    printf("Enter a number :");
    scanf("%d",&count);
    for (int i = 0; i < count; i++)
    {
        printf("the value is %d\n ",i);
}
}