#include <stdio.h>
int main()
{
    int age;
    // printf("enter a number:");
    // scanf("%d",&age);
    // printf(" you have entered %d as your age\n",age);
    if(age>=18)
    {
        printf("you can vote");
    }
   else if(age>10)
    {
        printf("you are not a teen you can't vote");
    }
//      else{
//         printf("you can't vote");
//     }
//your program can run without a else statement even if you are using else_if statement..

/*Quick_quiz_1 :
WAP to ask student you pass in maths and science :-
if pass in maths only or science only give them a gift worth rs 15 else if pass in both subject give them a gift  worth  rs 30 else don't give any gift..
//print the type of gift you are giving to them..
*/
 printf("enter 1 if you pass in both maths and science\n");
 printf("enter 2 if you pass in science\n");
 printf("enter 3 if you pass in maths\n");
 int a;
 scanf("%d",&a);
 if(a==1)
 {
    printf("you have received gift worth rs 45 (Trimax pen)");
    // printf("%lu\n",sizeof(45));  
    //printf("%lu\n",sizeof(int));    
 }
else if(a==2)
 {
    printf("you have received gift worth rs 15 (gel pen)");
    // printf("%lu\n",sizeof(15)); 
}
else
 {
    printf("you have received gift worth rs 15 (dot pen)");
    // printf("%lu\n",sizeof(15)); 
}
}