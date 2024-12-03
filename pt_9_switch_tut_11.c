// switch case statement is the alternative of if_else_if..
//default me break lagane ki zarrurat ni default me break redundant hota hai.. 
#include <stdio.h>
int main()
{
    printf("Enter the age\n");
    int age;
    scanf("%d",&age);
    
    switch (age)
    {
    case 13:
    printf("age is 13\n");
        break;

    case 3:
    printf("age is 3\n");
    printf("Enter your marks\n");
    int m;
    scanf("%d",&m);
    
    switch (m)
    {
    case 45:
      printf("Your marks is 45");
                break;
    
    default:
        printf("Oops !you are failed");
        //default me break lagane ki zarrurat ni default me break redundant hota hai.. 
    }
        break;

    case 23:
    printf("age is 23\n");
        break;
    
    default:
        printf("your enter age is invalid");
  //default me break lagane ki zarrurat ni default me break redundant hota hai.. 
    }
}