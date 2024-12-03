// p points to a that means p is a pointer variable that points to a..
//int a=123;
// &a= address of a.. 
// *a means a ke andar jo value hai wo print kardo is case me 123 a ke andar value hai..
// *a ka ek or matlab jisko bhi pointer point kar raha uski value print kar do..
// *  is a derefrence operator (also called indirection operation) used to get the value at a given address..
//agar aap kissi variable ko value diye bina print karayenge to garbage value print hogi us variable ki..
#include <stdio.h>
int main()
{
int a=734;
int* ptr=&a;
printf ("The value of a is %d\n",*ptr);
printf ("The value of a is %d\n",&*ptr);
printf ("The value of a is %d\n",*&ptr);
printf ("The value of a111 is %d\n",&ptr);//different print address a--;
printf ("The value of a is %d\n",&a);
printf ("The value of a is %p\n",*ptr);//print address/garbage value..
// printf ("The address of a is %d\n",&ptr);//print the address of a/garbage value..
// printf ("The address of a is %d\n",ptr);//print the address of a/garbage value..
// printf ("The address of a is %p\n",ptr);
printf ("The address of a is %p\n",&a);
// %p is a format specifier in c programming language,i.e. used to work with pointers while writing a code in C. it is used to print pointer value.
printf ("The address of a in hexadecimal form is %x\n",&ptr);//print the address of a in the hexadecimal form..
printf ("The address of a in hexadecimal form is %x\n",ptr);//print the address of a in the hexadecimal form..
printf ("The address of a in hexadecimal form is %p\n",ptr);//print the address of a in the hexadecimal form..
// A Pointer that is not assigned any value but NULL is known as NULL pointer..
// In computer programming a null pointer is a pointer that does not point to any object or function..
// We can use it ti initialize a pointer variable when that pointer variable isn't assigned any valid memory address yet.
int *ptr1 =NULL;
int *ptr2;
printf("NULL pointer %p\n",ptr1);
printf("Garbage value %p\n",ptr2);
//Null pointer ka use karke hum garbage value print karne se bacchenge..
// NUll pointer bhut kaam aata hai jab hum programming karte hai linklist ,tree ,binay tree ,tree traversal &,stack etc
// Dynamic memory allocation..
//isme agar ek variable print karra de agar uska kaam khatam ho jaata hai to ussi ki memory(Address) location pe hum doosra variable store kar sakte hai.. 
return 0;
}
