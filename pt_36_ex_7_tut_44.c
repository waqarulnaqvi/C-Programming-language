/*Exercise_7:-(Variable se agar aap yeah program banayenge to aap disqualified ho jaayenge)..
You manage  a travel agency and you want your n drivers to input their following details:
1.Name-->String..
2.Driving License Number -->String..
3.Route 
4.Kms -->approximate karke usko batana hai ki usne kitne km gaadi chalayi hai..
Your program should be able to take n as input(or you can take n=3 for simplicity) and your drivers will start inputting their details one by one..

Your program should print details of the drivers in a beautiful fashion.
User Structure..
Tips:-
Minimum 3 driver hone chahiye
or aap user ko option de sakte hai enter ANY NUmber from 1 to 3 as a switch..
*/
// #include <stdio.h>
// #include <string.h>
//  char array[3*50];
// struct drivers{
//   char name[34];
//   int d_l_number;
//   char route[34];
//   int kms;
// }s[n];

//   // char array[3*50]=("hi","hrlo","rtrt");//Error..
// int main()
// {
//   // char array[3*50];
//   // // char array[3*50]=("hi","hrlo","rtrt");//Error..
//   strcpy(array,"d1");
//   strcpy(array+50,"d2");
//   strcpy(array+100,"d3");
  
//   //  for (int i = 0; i < 101; i=i+50)
//   //  { 
//   //   printf("%s\n",array+i);
//   //  }
   
//   //  for(int i=0;i<3;i++)
//   //  {
    
//   //  }
//     // gets(d1.name);
//     // gets(d2.name);
//     // gets(d3.name);
//     // for(int i=0;i<3;i++)
//     // {
//     //   (array+k).route
//     // }
    
//   // puts("Enter the value:");
//   //   gets(d1.route);
//   //   gets(d2.route);
//   //   gets(d3.route);

//   //   printf("Enter the D_l number of d1:");
//   //   scanf("%d",&d1.d_l_number);

//   //   printf("Enter the D_l number of d2:");
//   //   scanf("%d",&d2.d_l_number);

//   //   printf("Enter the D_l number of d3:");
//   //   scanf("%d",&d3.d_l_number);

//   //   printf("Enter the kms that d1 travel's:");
//   //   scanf("%d",&d1.d_l_number);

//   //   printf("Enter the kms that d2 travel's:");
//   //   scanf("%d",&d2.d_l_number);

//   //   printf("Enter the kms that d3 travel's:");
//   //   scanf("%d",&d3.d_l_number);
  
    
//   //  for (int i = 0; i < 101; i=i+50)
//   //  { char a[45];
//   //       printf("Enter the kms that %d travel's:",array+i);
//   //       strcpy(a,array+i);
//   // //   scanf("%d",&a.d_l_number);
//   //  }
    
//     return 0;
// }
#include <stdio.h>
#include <string.h>

typedef struct drivers{
  char name[50];
  int d_l_number;
  char route[50];
  int kms;
}swhn;

//  struct drivers//it will run..
//   {char name[50];
//   int d_l_number;
//   char route[50];
//   int kms;
// }data[2];

int main()
{
int n;
printf("Enter total index of driver who are working in your travel agency so that they give their following details..");
scanf("%d", &  n);
// struct drivers s[n];
swhn s[n];

   for(int i=0;i<n;i++)
   {
    printf("\n Hello dear  cab driver index %d please enter \n1)Your name\n2)D.l. number\n3)route\n4)kms you travel..\n ",i+1);
    // scanf("%s%d%s%d",&s[i].name,&s[i].d_l_number,&s[i].route,s[i].kms);
    scanf("%s",&s[i].name);
    scanf("%d",&s[i].d_l_number);
    scanf("%s",&s[i].route);
    scanf("%d",&s[i].kms);
   }
   for(int i=0;i<n;i++)
   {
    printf("\nDriver index %d following details:-\n1)name=%s\n2)d_l_number=%d\n3)route=%s\n4)driver travel=%d kms\n",i,s[i].name,s[i].d_l_number,s[i].route,s[i].kms);
   }
  
    return 0;
}