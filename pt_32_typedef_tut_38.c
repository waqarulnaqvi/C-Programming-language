// nickname = alice name in typedef function..
//hum old name ke saath new name bhi use kar sakte hai jab hum log type def function use karte hai..
#include <stdio.h>
typedef struct Student
{
    int id;
    int marks;
    char fav_char;
    char name[34];
}std;
// struct Student s1,s2;
std s1,s2;//run because of typedef function..
// typedef s1 hi;//won't run error..
int main()
{   
    // s1.id=34;
    // s2.id=23;
    // printf("value of s1's id is %d\n",s1.id);
    // printf("value of s2's id is %d\n",s2.id);

    //  typedef <previous_name> <alias_name>;
    // typedef unsigned long ul;//typedef basically kisi function ka bada sa naam ko nickname de deta hai..
    // //chota naam de dete hai taaki convinent use karne me..
    // typedef int azann;
    // ul l1,l2,l3;
    // azann a=4;//without typedef conversion this will through an error..
    // printf("The value of a is %d",a);
    int *a,b;//a ka pointer hai but b ka integer banna hai..
    int c=34;
    // a=&b;
    // b=&a;//Error..
    a=&c;
    // b=&c; //run time Error..
     printf("The value of c is %d\n",*a);
    //  printf("The value of c is %d\n",b);//print address..
    //  printf("The value of c is %d\n",*b);//Error..

    typedef int* intp;
    intp a1,b1;//both are pointer..
      a1=&c;//Run
    b1=&c;//Run
    printf("The value of c is %d\n",*a1);
    printf("The value of c is %d\n",*b1);
    return 0;
}