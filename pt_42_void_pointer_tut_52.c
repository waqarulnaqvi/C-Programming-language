// void is a reserved keyword in C programming language and by using this keyword we can also make an pointer..

// VOID POINTER:
// A void pointer is a pointer that has no data type associated with it..
// A void pointer can be easily typecasted to any pointer type..
// In simple language it is a general purpose pointer variable means it can be used to store any type of data type..
// void pointer ek esa pointer hota hai jiska data type aap ni batate hai..uske baad jab address store karne ki baari aati hai tab hum define karte hai uske data type ka(yani kahenge int ka address store kar do ya char ka address store kar do)..
// void pointer ka istemaal kissi bhi data type ke address store karne ke liye use kar sakte hai..

// USES OF VOID POINTERS/GENERAL PURPOSE POINTER VARIABLE:-
//  In dynamic memory allocation,malloc() and calloc () return (void*) type pointer..
// This allows these dynamic memory functions to be used to allocate memory of any data type.This is because these pointers can be typecasted to any pointer type..
//calloc,malloc,realloc and free return void pointer as default.. 
#include <stdio.h>
int main()
{
    int a = 344;
    float b = 3.6;
    void *ptr;//void pointer is very useful in dynamic memory allocation..
    ptr = &a;
    // printf("The value of a is %d",*ptr);//Error..
    // you can't directly dereference void pointer..
    printf("The address of a is %d\n", (int *)ptr);
    printf("The value of a is %d\n", *(int *)ptr);
    // void *ptr1;
    ptr = &b;
    printf("The address of b is %d\n", (float *)ptr);
    printf("The value of b is %f\n", *((float *)ptr));
    return 0;
}
