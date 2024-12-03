//Dynamic Memory Allocation is a way in which the size of a data structure can be changed during the runtime..
/*WHAT CAUSES MEMORY LEAK IN C?
1)Memory leak is caused when we don't use dynamic memory properly..
2)When we keep on allocating memory in the heap without freeing the overall memory usage keeps on increasing..
3)This situation is the cause of memory leak i.e the programmers creates a memory block in the memory and forgets to delete it..
4)To avoid these memory leak situations, memory allocated on heap should always be frees when not needed..
 */
 //python and java have garbage collector which continuously free the memory which is not in the use..

#include <stdio.h>
#include <stdlib.h>
int main()
{
    int a ,i=0;
    int *i2;
    // while(i<454455)
    // {
    while(i<45545)
    {
        printf("Welcome to Code With Harry\n");
        i2= malloc(34444 * sizeof(int));
        if(i%100==0)
        {
            getchar();
        }
        i++;
        free(i2);//Without this(free) we will encounter a situation of memory leak..
    }
    return 0;
}