/*ex_13:
You have to create a command line utility to add/substract /divide /multiply two numbers 
First commadn line argument of your c program must be the operation.
The next argument being the two numbers. For example:
>>Command.c add 45 4
>>49 
*/
#include <stdio.h>
// #include <string.h>
// #include <stdlib.h>

int main(int argc, char const *argv[])//Command line argument..
{
    int a,b;
    printf("Enter a  number 1:");
    scanf("%d",&a);
    printf("Enter a  number 2:");
    scanf("%d",&b);
    // printf("Which operation do you want to perform:-\n1)addition\n2)substraction\n3)division\n4)multiplication..\n");
       for(int i=0;i<argc;i++)//argc stores the index of the argument/string and argv store that argument/string..
//we simply write command line utility here in this program..
       {
        // printf("This argument at index number %d has a value of %s \n", i, argv[i]);// index 0 value is a full path of the exe..
        int(argv[i]);
        // printf("This argument at index number %d has a value of %s \n", i, argv[i]);
         printf("\nAddition ,Substraction,division,multiplication of a and b is:\n");
        printf("Addition of %d + %d = %d \n",a,b, argv[i]=a+b);
        printf("Substraction of %d - %d = %d \n",a,b, argv[i]=a-b);
        printf("Division of %d / %d = %d \n",a,b, argv[i]=a/b);
        printf("Multiplication of %d * %d = %d \n\n\n",a,b, argv[i]=a*b);
       }
    return 0;
}
// argc contain number of arguments..
// argv contain all type of command line arguments..
// argv is a array of the pointer..
// if no args are passed than argc value is 1 lekin agar aapne argument pass kiye hai to jitte argument pass kiye hai wo 1 argc ki index value me jodhta jaata hai..
// first member/argument/canditate of the argv is a string which is the name of the program so agar koi bhi argument ni denge to 1 to aana hi aana hai..
// argv first string is the name of the program..