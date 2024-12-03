#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <time.h>
int generateRandomNumber()
{
  srand(time(NULL));
    return rand()%3+1;
}

// int main()
// {
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
   
//     scanf("%c",&b);
//       getchar();
//     switch (b)
//     {
//     case 'r':{
//         if(a==1)
//            {
//             printf("draw\n");
//             printf("Computer choice=rock\n");
//             c+=0;
//            }
//            else if(a==3)
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
//   default:
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