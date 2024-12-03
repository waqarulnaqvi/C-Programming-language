//void is a general purpose pointer..
//null pointer is a pointer that points nothing(NULL)..
//null pointer is a pointer which has a value reserved for indicating that the pointer or reference does not refer to a valid object..
//A null pointer is guarenteed to compare unequal to any pointer that points to a valid object..
//Dereferencing a null pointer is undefined behavior in C, and a conforming implementation is allowed to assume that any pointer that is dereferenced is not null..
//To pass a null pointer to a function argument when we don't want to pass any valid memory address..
// zyada tar time kissi pointer ko null sirf programmer hi kar sakta hai jo code likh rha hai..
//NULL is a macro..
//Null pointer has a null value whereas uninitialized pointer has a undefined value..
//Null pointer is a value whereas void pointer is a type..
// A null pointer stores a defined value, which is the one decided by the environment to not be a valid memory address for any object..
// null pointer stores a special value..
// in most of the compiler null pointer holss a void*(0) or 0 value..
#include <stdio.h>
#include <string.h>
int main()
{
    int a=34;
    int *ptr;//agar aap pointer ko uninitialized chor denge to unusual value aayegi koi guarentee ni hai ki kya output aayega null value bhi ho sakti hai ya koi specific address bhi..
    // int *ptr =NULL;
      // *ptr =&a;//Error because null pointer can not be dereferrenced..
      //  ptr =&a;//Now the value will be assigned to the null pointer and and after that it is not a null pointer u can dereferenced it..
    // int *ptr1 =&a;
  // printf("The address of ptr is %d\n", ptr);
  // printf("The address of ptr1 is %d\n", ptr1);
  // printf("The value of ptr is %d\n", *ptr);//you can't dereeference NULL pointer the compiler will be confused and program will be crashed when you will try to do that..
  // printf("The value of ptr1 is %d\n", *ptr1);
  // printf("The value of ptr1 is %d\n", *&a);
   if(ptr!=NULL)//Error corrector/handler..
   {
    printf("The value of ptr is %d\n", ptr);
    printf("The value of ptr is %d\n", *ptr);//always print 0 if you derefference it..
   }
   else{
    printf("The pointer is a null pointer and can not be derefferenced\n");
   }
    return 0;
}