// Important:-
//  strcpy(s3,strcat(s2,s1));
// puts(strrev(s2));//to print character string..
// gets(str3); //to input character string..
   // printf(" str cmp function :%d\n",strcmp(s1,s2));
   // strcpy(s3,strcat(s2,s1));
   // printf("The length of s1 is %d\n",strlen(s1));

//String is nothing just a null terminated character array..
/* C language does not support strings as a data type.
We express strings using an array of characters terminated by a null character ('\0')
String :array of characters terminated by NULL character 
We can create a character array using the following ways:
   char str[5]="gabe";
   char str[]={'g','a','b','e','\0'};
*/
// #include <stdio.h>
// #include <string.h>
// int main()
// {
//     char s1[]="Syed waqarul ";
//     char s2[]="Hasan Naqvi";//h pehle aata hai s se so it return 1(or positive value return kar sakta hai)..
//     // char s8[2]="Zaman";//Error
//     char s8[ ]="Zaman";//Z baad me  h se so it return -1(or negative value return kar sakta hai)..
//     char s9[ ]="Zaman";//both s8 and s9 are equal so it return 0..
//      printf(" str cmp function :%d\n",strcmp(s1,s2));
//      printf(" str cmp function :%d\n",strcmp(s2,s8));
//      printf(" str cmp function :%d\n",strcmp(s8,s9));
//      printf(" str cmp function :%d\n",strcmp(s9,s8));

    
//     // puts(strcat(s1,s2));
//     // puts("Hello "+1);//print hoga ello..
//     // printf("The length of s1 is %d\n",strlen(s1));
//     // printf("The length of s2 is %d\n",strlen(s2));
//     // printf("The reverse of s1 is %s\n",strrev(s1));
//     // puts(strrev(s1));//output:ivqaN nasaH
//     // puts(strrev(s2));//output:ivqaN nasaH
//     // puts(strrev(s2)+3);//output:aN nasaH
//     char s3[232];
//     char s5[2];//Run properly
//     char s4;
//     // s3=strcat(s1,s2);//Error not allow..
//     // s3[232]=strcat(s1,s2);//Error not allow..
//     // s4=strcat(s1,s2);//Error not allow..
// //     puts(s1);
// //     puts(s2);
    
// //     strcpy(s5,strcat(s1,s2));
// // //     // strcpy(s4,strcat(s1,s2));//Error not allow..
// //    puts(s5);
// //    strcpy(s3,strcat(s2,s1));
// //     puts (s3);
//     return 0;
// }

/* quick_quiz_4
 Allow user to enter 2 strings and then concatenate them by saying that strl is a friend of 
 str2 print this on console and then also make another string str3 and concatinate st1,str2,str3..
 */
#include <stdio.h>
#include <string.h>
int main()
{
//  char str1[ ]="hii ",str2[ ]="Hello ",str3[ ]=" good bye ",s3[454] ,s4[3434];
//  char str1[ 545]="hii ",str2[4545 ]="Hello ",str3[ 454]=" good bye ",s3[454] ;//Run
//  char s4[1];//Run
//  char s4[3434];//Run

//  char str1[ 1]="hii ",str2[1 ]="Hello ",str3[ 1]=" good bye ",s3[1] ,s4[1];//Error
// char s4[1];//Logical Error means can't print value properly if the value more than 1

 char str1[ 545],str2[4545 ],str3[ 454],s3[454] ;
// char  s4[3434];//Run
 char s4[1];//Run
 
//  char str1[1],str2[1 ],str3[1],s3[1] ,s4[1];//Logical Error means can't print value properly if the value more than 1

   //  s3=strcat(str1,str2);//Error not allow..
   //  s3[232]=strcat(str1,str2);//Error not allow..
   //  s4=strcat(str1,str2);//Error not allow..

   puts("Enter str1:");
   gets(str1);
   puts("Enter str2:");
   // gets(str1); //Run
    gets(str2); 
   puts("Enter str3:");
   // puts("Enter str3:"+strcat(str1,str2));//Error
   // gets(str1); //Run
   gets(str3); 
   // printf("str1 is a friend of str2 %s",strcat(str1,str2));
   // puts(strcat(str1,str2));
   printf("str1 is a friend of str2 is friend of str3 %s\n",strcat(str1,str2));//hii Hello 
   printf("str1 is a friend of str2 is friend of str3 %s\n",strcat(str1,str3));//hii Hello  good bye 
   //    strcpy(s3,strcat(s2,s1));
   printf("using strcpy %s\n",strcpy(s4,strcat(str1,str3)));//hii Hello  good bye  good bye
   printf("str2 is friend of str3 %s\n",strcat(str2,str3));// Hello  good bye
   printf("str1 value %s\n",str1);//self input:- goodbye//user input:- hii Hello  good bye good bye
   printf("str2 value %s\n",str2);//Hello  good bye
   printf("str3 value %s\n",str3);//good bye
   printf("printing s4 %s" ,s4);//hii Hello  good bye  good bye
   //  puts(strcat(str1,str2));
   //  puts(strcat(s1,s2));
   // puts(strcat(str1,str3));
   return 0;
}