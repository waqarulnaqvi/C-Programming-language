/*Dyanmic Memory Allocation:
1)An statically allocated variable or array has a fixed size in memory..

2)Dynamic Memory Allocation is a way in which the size of a data structure can be changed during the runtime..

3)Allocation is done during the program's execution , static memory allocation vice versa..

4)There is memory reusability and the allocated memory can be freed when not required , static memory allocation vice versa..

5)Dynamic Memory allocation is more efficient and static memory allocation is less efficient..

6)In complex program we must use dynamic memory allocation whereas in simple program we mostly use static memory allocation..

7)heap is called a dynamic memory and using heap is called a dynamic memory allocation..

In simple words Dynamic Memory allocation hota hai runtime me memory allocate karne ka or free karne ka allocate ki gyi memory ko..
*/
#include <stdio.h>
int main()//list of all the storage..
//stack and heap memory filled in the opposite direction..
// e.g.:-If stack memory filled from north than heap memory will filled from south..
// If stack and heap memory collapse than there is a condition of the stack overflow..
//Compiler allocates some space for the stack part of the memory..
//Typical example includes recursion with wrong/no base condition..
//Initially some memory will be reserved for main() in the stack. This is also called as the stack frame of main()
{
    
    return 0;
    
    /*Heap
    1)There are a lot of limitations of stack(static memory allocation)..
    2)Some of the examples include variable sized array, freezing memory no longer required etc..
    3)Heap can be used flexibly by the programmer as per his needs..
    4)if you did mistake while creating the than you will face a critical problem heap size will be increased continuously and never stop..
    5)In heap,the memory consumed will not get freed automatically in case we overwrite the pointer..
    6)By any case if we overwrite the heap pointer than memory will store a garbage value and it will be reserved throughout the program until we specifically say heap to free it..
    */
}
/*Conclusion using size command:
gcc pt_37_dynamic_memory_allocation_tut_45.c ; size .\a.exe
Output:
  text  data  bss   dec  hex filename
  8788  1532 1004 11324 2c3c .\a.exe

size command bytes me size battata hai,text,data,bss,dec,hex&,filename segment ka..
*/