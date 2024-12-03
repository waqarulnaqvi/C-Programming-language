/*ex_13:
You have to create a command line utility to add/substract /divide /multiply two numbers 
First commadn line argument of your c program must be the operation.
The next argument being the two numbers. For example:
>>Command.c add 45 4
>>49 
*/
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main(int argc, char *argv[])//Command line argument..
{
    char * operation;
    int a,b;
    operation = argv[1];
    a=atoi(argv[2]);//atoi function converts string to integer..
    b=atoi(argv[3]);//atoi function converts string to integer..

    if(strcmp(operation,"add")==0)
    {
        printf("Additon of %d and %d is : %d\n",a,b,a+b);
    }
    else if(strcmp(operation,"sub")==0)
    {
        printf("Substraction of %d and %d is : %d\n",a,b,a-b);
        printf("Substraction of %d and %d is : %d\n",b,a,b-a);
    }
    else if(strcmp(operation,"div")==0)
    {
        printf("Division of %d and %d is : %d\n",a,b,a/b);
        printf("Division of %d and %d is : %d\n",b,a,b/a);
    }
    else
    {
        printf("Multiplication of %d and %d is : %d\n",a,b,a*b);
    }
//    printf("Operation is %s\n",operation);
//    printf("Operation is %d\n",a);
//    printf("Operation is %d\n",b);
    return 0;
}
// argc contain number of arguments..
// argv contain all type of command line arguments..
// argv is a array of the pointer..
// if no args are passed than argc value is 1 lekin agar aapne argument pass kiye hai to jitte argument pass kiye hai wo 1 argc ki index value me jodhta jaata hai..
// first member/argument/canditate of the argv is a string which is the name of the program so agar koi bhi argument ni denge to 1 to aana hi aana hai..
// argv first string is the name of the program..