#include <stdio.h>
#include <string.h>
#include <stdlib.h>
// int main2()//Error..
int main()
{
      printf("File name is %s\n",__FILE__);
    //   printf("Today's date is %s\n",___DATE___);//Error..
    //   printf("Today's date is %s\n",__date__);//Error..
    //   printf("Today's date is %s\n",__Date__);//Error..
      printf("Today's date is %s\n",__DATE__);
      printf("Time NOW is %s\n",__TIME__);
      printf("Line Number is %d\n",__LINE__);
      printf("ANSI: %d\n",__STDC__);//1 means true and 0 means false..
    return 0;
}