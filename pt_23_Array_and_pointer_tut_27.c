// jab bhi hum dereffrencing karte hai matlab star lagga ke value print tab agar waha pe value ni hai to error throw hoga..
// agar aap kissi invalid memory location pe chale jaate jaha pe value hi ni hai tab waha pe error through hoga..
// painter +32
// address(1000)+32*(data type size,in case of int size will be 4)..
#include <stdio.h>
int main()
{
    // int a=34; 
    // int* ptra=&a;
    // // printf("%d\n",ptra);
    // // printf("%d\n",ptra+1);//it increase 1 size of data type(int) in the address of data type..
    // char b=65; 
    // char* ptra1=&b;
    // printf("%c\n",&ptra1);
    // // printf("%d\n",ptra1);
    // // printf("%d\n",ptra1+1);
    // // printf("%d\n",ptra1++);
    // // printf("%d\n",ptra1--);
    // // printf("%p\n",ptra1);
    // // printf("%p\n",ptra1+1);
    // printf("%p\n",ptra1);
    // printf("%c\n",&ptra1+1);//it increase 1 size of data type(int) in the address of data type..
    // printf("%c\n",&ptra1-1);//it increase 1 size of data type(int) in the address of data type..
      // int arr[]={11,21,3,4,4,54,55,4,4};//Run
    //   int arr[]={1,2,3,4,4,54,55,4,4,};//Run
    //   int arr1[4]={1,2,3,4,4,54,55,};//Error
    //   printf("Value at position 0 of the array is %d\n",arr[0]);
    //   printf("Address at position 0 of the array is %d\n",&arr[0]);//same
    //   printf("Address at position 0 of the array is %d\n",&arr);//same
    //arr--;//Error
    // arr++;Error because it is a constant it store address of the first element of array..
    // but
    // int *aptr= &arr;//Error
    // int *aptr= arr;
    // printf("%d\n",*aptr);
    // aptr--;
    // printf("%d\n",*aptr);//garbage value because before 0 their is no address of array..
    // aptr++;
    // aptr++;
    // printf("%d\n",*aptr);
    // aptr++;
    // printf("%d\n",aptr);
    // aptr++;
    // printf("%d\n",aptr);
    int a[2]={2,3};
    int *pa=a;
    printf("%d\n",*pa);
    printf("%d\n",pa);
       pa++;
    printf("%d\n",*pa);
    printf("%d\n",pa);
       pa++;
    printf("store random address in the array %d\n",*pa);//store random address in the array
    printf("%d\n",pa);
       pa++;
    printf("store random address in the array %d\n",*pa);//store random address in the array when we are trying to print number more than array length..
    printf("%d\n",pa);
       pa++;
    printf("store random address in the array %d\n",*pa);//store random address in the array when we are trying to print number more than array length..
    printf("%d\n",pa);
       pa++;
    printf("store random address in the array %d\n",*pa);//store random address in the array when we are trying to print number more than array length..
    printf("%d\n",pa);
       pa++;
    printf("store random address in the array %d\n",*pa);//store random address in the array when we are trying to print number more than array length..
    printf("%d\n",pa);
       pa++;
    printf("store random address in the array %d\n",*pa);//store random address in the array when we are trying to print number more than array length..
    printf("%d\n",pa);
       pa++;
    printf("store random address in the array %d\n",*pa);//store random address in the array when we are trying to print number more than array length..
    printf("%d\n",pa);
       pa++;
    printf("store random address in the array %d\n",*pa);//store random address in the array when we are trying to print number more than array length..
    printf("%d\n",pa);
       pa++;
    printf("store random address in the array %d\n",*pa);//store random address in the array when we are trying to print number more than array length..
    printf("%d\n",pa);
     
    //   printf("Address at position 0 of the array is %d\n",arr);//same
    //   printf("Address at position 1 of the array is %d\n",&arr[1]);
    //   printf("Address at position 1 of the array is %d\n",&arr+1);
    //   printf("Address at position 1 of the array is %d\n",&arr[9]);
    //   printf("Address at position 1 of the array is %d\n",arr+1);
    //   printf("Address at position 0 of the array is %d\n",arr);//same

    //   Using dereference or indirection operation
      // printf("value of Address at position 1 of the array is %d\n",*&arr[1]);
      // printf("value of Address at position 1 of the array is %d\n",*&arr+1);
      // printf("value of Address at position 9 of the array is %d\n",*&arr[9]);
      // printf("value of Address at position 1 of the array is %d\n",*arr+1);
    //   printf("Address at position 27 of the array is %d\n",&arr[27]);
    //   printf("value at position 27 of the array is %d\n",arr[27]);
      return 0;
}