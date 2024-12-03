#include <stdio.h>

int main()
{
   int i=0,j=0;
for (;j<3 ,i < 5; i++,j++)//statement 2 me agar aap bhut saare expression daal dete hai to wo execute to sab karega lekin manega sirf last wala expression.. 
{
printf("%d%d\n",j,i);
}

printf("part2\n");

for (int i1 = 0,j1=0; i1 < 5; )//0 value ko false manna jaata or koi bhi non_zero value ko true manna jaata...
{
printf("%d%d\n",j1,i1);
i1++,j1++;
}

printf("part3\n");

for (int i2 = 0,j2=0; 0 ; i2++)
{
printf("%d%d\n",j2,i2);
}
printf("part4\n");

int i3=0,j3=0;
// 13=j3=0; Error..
for (; i3<5 ; i3++)
{
printf("%d%d\n",j3,i3);
}

return 0;
}