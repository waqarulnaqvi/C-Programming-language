// Dangling means hanging..
// A pointer pointing to a freed memory location or the location whose content has been deleted is called a dangling pointer..
// malloc ,calloc ,realloc &,free pointing to a void pointer by default..

/*Caused of Dangling Pointer:-
1)Deallocation of memory:-When memory is deallocated, the pointer keeps pointing to the freed space.
2)Returning local variable in function calls.
3)Variable going out of scope.

//Dangling pointer ek achi cheez ni hai yeah aapke program me bug badhata hai agar aap deallocate karne ki koshish karre dangling pointer ko so jab bhi pointer ka use ho jaaye usse aap null pointer kar de yeah recommended hai taaki aap dangling pointer banne se avoid kar sakke..
*/
#include <stdio.h>
#include <stdlib.h>
// int *functionDangling()
// {
//     int a,b,sum;
//     a=34;
//     b=434;
//     sum =a+b;
//     return &sum;
// }
int main()
{
    // case 1:De allocation of a memory block..
    // int *ptr = (int *)malloc(7 * sizeof(int));
    // ptr[0] = 233;
    // ptr[1] = 231;
    // ptr[2] = 232;
    // ptr[3] = 234;
    // printf("\nArray value is\n");
    // for (int i = 0; i < 4; i++)
    // {
    //     printf("%d\t", *(ptr + i));
    // }
    // free(ptr);
    // // NOW ptr IT IS A dANgling pointer.
    // printf("\nArray value is\n");
    // for (int i = 0; i < 4; i++)
    // {
    //     printf("%d\t", *(ptr + i));
    // }
    // ptr=NULL;// NOW ptr IT IS A NULL pointer.
    // printf("\nArray value is\n");
    // for (int i = 0; i < 4; i++)
    // {
    //     printf("%d\t", *(ptr + i));
    // }

    // Case 2: Function returnig local variable address..
    // int *dangptr=functionDangling();//dangPtr is now a dangling pointer..

    // Case 3: If a variable goes out of scope..
    int *ptr3;
    {
        int a=34;
        ptr3=&a;
        printf("The value of a is %d\n", *(ptr3));
    }
    // a=23;//Error..
    printf("The value dangling pointer of a is %d\n", *(ptr3));  //Here variable a goes out of scope which means ptr3 is pointing to a location which is freed and hence ptr3 is now a dangling pointer..
    return 0;
}