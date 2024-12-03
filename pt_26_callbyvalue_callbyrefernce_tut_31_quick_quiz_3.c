// // * is a dereference or indirection operator..
// #include <stdio.h>
// // Call by reference:-
// // Values address also swaped..
// /*e.g.:-
// Before swapping:-
// a address  =12000 and a value=12;
// b address  =43000 and a value=4;
// After swapping:-
// a address  =12000 and a value=4;
// b address  =43000 and a value=12;
// */
// void swap(int *a, int *b, int *c) // Address will be a hexadecimal number..
// {
//     int t = *a;
//     *a = *b;
//     *b = t;
//     *c = 43545;
//     // return;
// }
// int main() // Every c program execution starts from main function..
// {
//     int a, b, c;
//     printf("\nEnter number 1:\n");
//     scanf("%d", &a);
//     printf("\nEnter number 2:\n");
//     scanf("%d", &b);
//     printf("\nEnter number 3:\n");
//     scanf("%d", &c);
//     printf("\nValue of a is %d ,b is %d,& c is %d before function call\n ", a, b, c);
//     printf("\nAddress of a is %d ,b is %d,& c is %d before function call\n ", &a, &b, &c);
//     swap(&a, &b, &c);
//     printf("\nValue of a is %d ,b is %d,& c is %d before function call\n ", a, b, c);
//     printf("\nAddress of a is %d ,b is %d,& c is %d before function call\n ", &a, &b, &c);
//     return 0;
// }
/*
quick_quiz_3:-
Given Two number a and b , add them then substract them and assign them to a and b using call by reference .
a=3;
b=4;
After running the function:
a=3+4=7;
b=4-3=1;
  */
#include <stdio.h>
void two_num(int *a, int *b);
int main()
{
  int a, b;
  printf("\nEnter number 1:\n");
  scanf("%d", &a);
  printf("\nEnter number 2:\n");
  scanf("%d", &b);
  printf("\nValue of a is %d &,b is %d before function call..\n ", a, b);
  two_num(&a, &b);
  printf("\nValue of a is %d &,b is %d After function call..\n ", a, b);
  return 0;
}
void two_num(int *x, int *y)
{
  int t = *x;
  *x = *x + *y;
  *y = *y - t;
  ;
}