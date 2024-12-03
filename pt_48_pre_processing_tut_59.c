// Compiler converts textual form of a C program into an executable..
/* C Preprocessor:-
1)C preprocessor comes under action before the actual compilation process..
2)C preprocessor is not a part of the c compiler..
3)It is a text substitution tool..
4)All preprocessor commands begin with a hash symbol(#)..
*/
#include <stdio.h>
#include "pt_48_tut_59.c"//#include "directories"-->yeah doosri file ke content ko include karwa deti hai..
#define PI 3.14//define variable of a preprocessor..
// #define square(r) r*R//Error
// #define square(r) r*r*r//defining macro..
#define square(r) r*r//defining macro..
int main()
{
    printf("The value of PI is %f\n",PI);
    float var=PI;
    printf("The value of var is %f\n",var);
    int r1=2;
    printf("The area of this circle is %f\n",PI * square(r1));
      printf("File name is %s\n",__FILE__);
    return 0;
}