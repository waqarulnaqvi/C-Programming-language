#include <stdio.h>
/* A 1D array is a like a  list.
A 2D array is a like a table.
The C language places no limits on the number of dimenstions in an array.
Some texts refer to 1D array as vectors, 2D arrays as matrices,and use the general term arrays when the number of dimensions is unspecified or unimportant..*/
int main()
{
  //   int m[4];
  //    m[0]=32;
  //    printf("marks of student 1 is %d\n",m[0]);
  //    m[0]=3;
  //    printf("marks of student 1 is %d\n",m[0]);
  //    printf("marks of student 2 is %d\n",m[1]);
  //    m[1]=322;
  //    m[55]=82; //run
  //    printf("marks of student 55 is %d\n",m[55]); //run

  //    m[-5]=84562; //run
  //    printf("marks of student -5 is %d\n",m[-5]); //run

  // int k7[ -1]={1,3,4,34,5,435,3};//Error
  // int k[ 23]={1,3,4,34,5,435,3};
  // // int k[ 23]={1,3,4,34,5,435,3};//Error two same name array can't run..
  // int k1[ ]={1,3,4,34,5,435,3};
  // // int k2[3]={1,3,4,34,5,435,3};//Error
  // // int k3[3]={1,3,4,5};//Error
  int k[3]={1,3,4,};//Run//Declaration with initialization..
  // int k[ ]={1,3,4,};//Run//Declaration with initialization..
  k[-12]=122;
  k[3]=420;//if you try to insert element more than array length by decalaration and initialization method than it will possible..
  k[4]=1;
  k[5]=2;
  k[6]=3;
  // printf("marks of student -5 is %d\n",k[-5]);
  // printf("marks of student -10 is %d\n",k[-10]);
  // printf("marks of student -12 is %d\n",k[-12]);
  // printf("Run\n");
  // for (int i = 0; i < 7; i++)
  // {
  //     printf("%d\t",k[i]);
  // }
  // k[-5]=55; //doesn't effect on array value..
  // k[-2]=12323;//doesn't effect on array value..
  k[6]=34;
  // k[7]=348;//doesn't effect on array value..
  // printf("\n");
  // for (int i = 0; i < 7; i++)
  // {
      // printf("%d\t",k[i]);
  // }
  
  // float i=12.34;
  //  printf("Enter the element at %i index :\n ", i);//it will give an variable address in the place of i..
  
  int a[5];
  for (int i = 0; i < 8; i++)
  {
    printf("Enter the element at %d index :\n ", i);
    scanf("%d", &a[i]);//after completing array length it run but it doesn't place any element in the array..but sometimes it will print all array element.. 
  }
  printf("Element of array is\n");
  for (int i = 0; i < 8; i++)
  {
    printf("%d\t", a[i]);//it will run but after completing array length it will duplicate array last element once then print address of the array..but sometimes it will print all array element.. 
  }
  // 1D array
  /*int a[5];
  for (int i = 0; i < 5; i++)
  {
    printf("Enter the element at %d index :\n ", i);
    scanf("%d", &a[i]);
  }
  printf("Element of array is\n");
  for (int i = 0; i < 5; i++)
  {
    printf("%d\t", a[i]);
  }
*/

// 2D array
// int m1[][3]={{4,5,6},{1,2,3}};//run
// // int m3[][ ]={{4,5,6},{1,2,3}};//error
// // int m2[ 2][]={{4,5,6},{1,2,3}};//error
// // int m5[2][3]={{4,5,6,6},{1,2,3}};//Error
// int m[2][3]={{4,5,6,},{1,2,3}};
// for (int i = 0; i < 2; i++)
// {
//   for (int j = 0; j < 5 ;j++)//try to print element more than array length. 
//   {//it will run but either it repeat element or it will print address 
//     printf("%d\t",m1[i][j]);
//   }
//   printf("\n");
// }

  return 0;
}