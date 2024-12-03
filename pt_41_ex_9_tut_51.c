/*Create Rock, Paper & Scissors Game 
Player 1: rock
Player 2(computer ): scissors -->player 1 gets 1 point 
rock vs scissors - rock wins
paper vs scissors - scissors wins 
paper vs rock - paper wins
Write a C program to allow user to play this game three times with computer.Log the scores of computer and the player. Display the name of the winner at the end..
Notes : You have to display name of the player during the game. Take users name as an input from the user..
*/
// #include <stdio.h>
// #include <string.h>
// #include <stdlib.h>
// #include <time.h>
// int generateRandomNumber()//srand take seed as an input and is defined inside stdlib.h..
// {
//   srand(time(NULL));
//     //   printf("The random number between 0 to 3 is %d\n",rand()%3+1);
//     return rand()%3+1;
// }
// // int funcdemo(){
// //     static int k=34;
// //   return k;}
// int main()
// {
//     // srand(45);//agar hum srand ko ek hi value de de to ek hi value milegi baar baar kyuki constant value change ni hoti baar baar.
//     // srand(time(NULL));//time change hota rehta isliye srand different different input generate karta rahega.
//     //srand takes seed as an input and is defined inside stdlib.h header file..
//     char name[3434];
//     printf("\nPlease Enter Your name:\n");
//     gets(name);
//  printf("This is a  Rock, Paper & Scissors Game..\n   %s(You) are a Player 1\n   Computer is a Player 2\n\tRules:\t\t\n1)rock vs scissors - rock wins.\n2)paper vs scissors - scissors wins.\n3)paper vs rock - paper wins..",name);
//   int n,a,c=0;
//   char b;
//   printf("\n\nHow many times do you want to play this game:\n");
//   scanf("%d",&n);
//   getchar();
//   for(int i=0;i<n;i++)
//   {
//         printf("\nPlease enter your choice  r)Rock  s)Scissors  p)Paper..  \n");
//  a=generateRandomNumber();
 // //    printf("The random number between 1 to 3 is %d\n",a);  
//     scanf("%c",&b);
//       getchar();
//     switch (b)
//     {
//     case 'r':{
//         if(a==1)
//         // if(a==b)
//            {
//             printf("draw\n");
//             printf("Computer choice=rock\n");
//             c+=0;
//            }
//            else if(a==3)
//         //    else if(b+1==a)
//             //    else if(a==3)
//            {
//             printf("Computer Wins\n");
//              printf("Computer choice=paper\n");
//            c+=-1;
//            }
//            else {
//             printf("%s(YOU) Wins\n",name);
//               printf("Computer choice=scissors\n");
//               c+=1;
//            }
//            printf("YOUR(%s) choice = Rock\n",name);
//         break;
//     }
//     case 'p':{
//         if(a==3)
//            {
//             printf("draw\n");
//              printf("Computer choice=paper\n");
//              c+=0;
//            }
//            else if(a==2)
//            {
//             printf("Computer Wins\n");
//              printf("Computer choice=scissors\n");
//              c+=-1;
//            }
//            else {
//             printf("%s(YOU) Wins\n",name);
//               printf("Computer choice=Rock\n");
//               c+=1;
//            }
//            printf("YOUR(%s) choice = Paper\n",name);
//         break;
//     }
//     case 's':{
//         if(a==2)
//            {
//             printf("draw\n");
//              printf("Computer choice=scissors\n");
//              c+=0;
//            }
//            else if(a==1)
//            {
//             printf("Computer Wins\n");
//                printf("Computer choice=Rock\n");
//                c+=-1;
//            }
//            else {
//             printf("%s(YOU) Wins\n",name);
//             printf("Computer choice=paper\n");
//             c+=1;
//            }
//            printf("YOUR(%s) choice = Scissors\n",name);
//         break;
//     }

//     default:
//      printf("..Please enter correct choice..\n");
//   }
//   }
//   if(c==0)
//   {
//    printf("\n\nDRAW..\n");
//   }
//   else if(c>0)
//   {
//   printf("\n\nCongratulations! %s(YOU) WON..\n",name);
//   }
//   else{
//    printf("\n\nYOU LOSE..\n");
//   }
//     return 0;
// }
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <time.h>
int generateRandomNumber()//srand take seed as an input and is defined inside stdlib.h..
{
  srand(time(NULL));
    return rand()%3+1;
}
int main()
{
    char name[3434];
    printf("\nPlease Enter Your name:\n");
    gets(name);
 printf("This is a  Rock, Paper & Scissors Game..\n   %s(You) are a Player 1\n   Computer is a Player 2\n\tRules:\t\t\n1)rock vs scissors - rock wins.\n2)paper vs scissors - scissors wins.\n3)paper vs rock - paper wins..",name);
  int n,a,c=0;
  char b;
  printf("\n\nHow many times do you want to play this game:\n");
  scanf("%d",&n);
  getchar();
  for(int i=0;i<n;i++)
  {
        printf("\nPlease enter your choice  r)Rock  s)Scissors  p)Paper..  \n");
 a=generateRandomNumber();
   
    scanf("%c",&b);
      getchar();
    switch (b)
    {
    case 'r':{
        if(a==1)
           {
            printf("draw\n");
            printf("Computer choice=rock\n");
            c+=0;
           }
           else if(a==3)
           {
            printf("Computer Wins\n");
             printf("Computer choice=paper\n");
           c+=-1;
           }
           else {
            printf("%s(YOU) Wins\n",name);
              printf("Computer choice=scissors\n");
              c+=1;
           }
           printf("YOUR(%s) choice = Rock\n",name);
        break;
    }
    case 'p':{
        if(a==3)
           {
            printf("draw\n");
             printf("Computer choice=paper\n");
             c+=0;
           }
           else if(a==2)
           {
            printf("Computer Wins\n");
             printf("Computer choice=scissors\n");
             c+=-1;
           }
           else {
            printf("%s(YOU) Wins\n",name);
              printf("Computer choice=Rock\n");
              c+=1;
           }
           printf("YOUR(%s) choice = Paper\n",name);
        break;
    }
    case 's':{
        if(a==2)
           {
            printf("draw\n");
             printf("Computer choice=scissors\n");
             c+=0;
           }
           else if(a==1)
           {
            printf("Computer Wins\n");
               printf("Computer choice=Rock\n");
               c+=-1;
           }
           else {
            printf("%s(YOU) Wins\n",name);
            printf("Computer choice=paper\n");
            c+=1;
           }
           printf("YOUR(%s) choice = Scissors\n",name);
        break;
    }
  default:
     printf("..Please enter correct choice..\n");
  }
  }
  if(c==0)
  {
   printf("\n\nDRAW..\n");
  }
  else if(c>0)
  {
  printf("\n\nCongratulations! %s(YOU) WON..\n",name);
  }
  else{
   printf("\n\nYOU LOSE..\n");
  }
    return 0;
}
