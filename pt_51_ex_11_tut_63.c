/* Exercise 11:
Write a Program to check whether it is a palindrome number or not..
if reverse of the number remains the same as the original number than it is called palindrome number..
*/
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int is_palindrome(int n)
{
int rem,rev=0;
int t=n;
while(n!=0)
{ 
    rem =n%10;
    rev=rev*10+rem;
    n=n/10;
}
if (t==rev)
{
    // printf("NUmber is reversed:");
    return 1;
}
// else
// {
//     return 0;
// }
return 0;
}

int is_palindrome_string(char name[ ])
{
char name1[50];
strcpy(name1,name);
strrev(name);
int value =strcmp(name,name1);
return value;
}
int main()
{
/*    int n;
    printf("Enter a number:");
    scanf("%d",&n);*/

/* Palindrome number program with function:

    if(is_palindrome(n))
    {
   printf("It is a Palindrome number..\n");
    }
    else 
    {
        printf("NOt a Palindrome number..\n");
    }*/

/* Palindrome number program without function:

int rem,rev=0;
int t=n;
// printf("Hello\n the value of t is %d and the value of n is %d ",t,n);
while(t!=0)
{ 
    rem =t%10;
    rev=rev*10+rem;
    t=t/10;
// printf("t is %d\n",t);
}
if(rev==n)
{
    printf("Palindrome number..");
}
else{
    printf("NOt a palindrome number:\nOriginal number is %d\n REverse number is %d\n",n,rev);
}*/

printf("Enter a String:\n");
char name[50];
gets(name);

/* Palindrome number program using String without function:

char name1[50];
// strcpy(name,name1);//this will store garbage value in name..
strcpy(name1,name);
// printf("The value of name is %s \n and the value of name1 is %s\n",name,name1);
// puts(strrev(name));
strrev(name);
int value =strcmp(name,name1);
// if 2 string are same in strcmp function than return 0 otherwise it will return -1,1 or any value..
// printf("The value is %d same or not",value);
if(value==0)
{
       printf("It is a Palindrome String..\n");
    }
    else 
    {
        printf("NOt a Palindrome String..\n");
    }*/

/*Palindrome number program using String with function:*/

 if(is_palindrome_string(name))
    {
        printf("NOt a Palindrome number..\n");
    }
    else 
    {
        printf("It is a Palindrome number..\n");
    }

    return 0;
}