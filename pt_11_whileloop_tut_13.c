#include <stdio.h>
int main()
{
int num,c=0;
printf("Enter a number\n");
scanf("%d",&num);
do
{
  //c=0;infinite loop..
printf("%d\n",c+1);
c++;
} while (c<num);
  // return 0;
}