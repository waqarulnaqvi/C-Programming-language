#include <stdio.h>
// static memory allocate before the run type of the program(main method) that's
// why static int b =func1();//Error.. and we have to initialized static variables with constant literals

/* 1)static and global variable won't encourged to used in a program because
 static and global varible remains in a memory throughout the span of the program..
 2)static variable are varible which have a property of preserving their values even when they go out of scope..
 3)They preserve their value from the previous scope and are not initialized again..
 4)staic variables are initialized to 0 if not initialized explicitly..
 5)In C,staic variables can only be initialized using constant literals..
 */
int b = 55;

//  void var(static int a){//error
static void var(int a)
{static int s;//static variable default value is 0 like a global variable..
    printf("The value of var %d\n", a); // value won't change..
    a++;
}

static int var1()
{
    int b = 5;
    printf("The value of var %d\n", b);
    b++;
    return b; // value won't change..
}
 int const1()
{
   const int a=34;
   return a;
}
int statvar()
{
   static int a=34;
   return a;
}
 int var2()
{
    //    static int b=5;
    static int b; // static variable ko agar hum ese hi chor de to wo 0 se initialized ho jaayega..
    b++;
    return b; // value change..
}

int main()
{
    // static int b =var2();//Error static want's constant value it does not accept function...
    // static int b=const1();//Although function return constant value but it still through an error..
    // static int b=statvar();//Although function return static value but it still through an error..

    // const int b1 =34;
    // static int a1 =b1;

    // int b2 =34;
    // static int a2 =b2;

    // static int b3 =34;
    // static int a2 =b3;


    int c = var2(); // Run
    int a = 45;
    var(a); // value won't change..
    var(a); // value won't change..
    var(a); // value won't change..
    printf("\n");

    c = var1(); // value won't change..
    c = var1(); // value won't change..
    c = var1(); // value won't change..
    int *ptr = &c;

    // printf("\nThe value of var1 is %d\n",var1());//value won't change..
    // printf("The value of var1 is %d\n",var1());//value won't change..
    // printf("The value of var1 is %d\n",var1());//value won't change..

    printf("\nThe value of var2 is %d\n", var2()); // value change..
    printf("The value of var2 is %d\n", var2());   // value change..
    printf("The value of var2 is %d\n", var2());   // value change..

    return 0;
}