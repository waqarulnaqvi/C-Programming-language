#include <stdio.h>
int main()
{
//    label:
//    printf("we are inside label\n");
//    goto end;
// //    goto exit;
//   printf("Hello World\n");
//   goto label;
//   end:
//   printf("we are at end");
int num;
for (int i = 0; i < 5; i++)
{
  printf("%d\n",i);
  for (int j = 0; j < 5; j++)
  {
    printf("Enter the number:\n");
    scanf("%d",&num);
  // label:
    if (num==0)
{
    // break;//it exit from only one loop..
    goto end;
    }
    
  }
  
}
  // goto label;
end:

    return 0;
}