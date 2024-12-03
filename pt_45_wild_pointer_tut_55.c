/*WILD POINTER:-
1)Uninitialized pointers are known as wild pointers..
2)These pointers point to some arbitray location in memory and may cause a program to crash or behave badly..
3)Dereferencing wild pointer can cause nasty bugs..
4)It is suggested to always initialize unused pointers to NULL.. 
*/
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
int main()
{
    int a=234;
    int *ptr;//It is a wild pointer..
    // printf("ptr is %d\n",ptr);//print address..
    // printf("ptr1 is %d\n",*ptr);//Always print 0..

    // *ptr=34;//undefined behavior..
    // printf("ptr1 is %d\n",ptr);//print address..
    // printf("ptr2 is %d\n",*ptr);//print value 34..
   /*
    ptr=343;//Error
        printf("ptr3 is %d\n",ptr);//print address..
    printf("ptr4 is %d\n",*ptr);//print value 34..
    */

    // *ptr=343;
    //     printf("ptr3 is %d\n",ptr);//print address..
    // printf("ptr4 is %d\n",*ptr);//print value 34..
    
    // *ptr=&a;//Error..
    ptr=&a;//ptr is no longer a wild pointer..
    printf("The address of a is %d\n",ptr);
    printf("The value of a is %d",*ptr);
        return 0;
}