/*
// Take input from the user and ask user to choose  0 for star pattern and 1 for triangular star pattern than print the pattern accordingly..
1)Traingular star pattern..
*
**
***
****
2)Reverse Traingular star pattern..
****
***
**
*
*/
#include <stdio.h>
int main()
{
  while (1)
  {
    char k;
    float n;
    printf("Which conversion do you want: \nq)to Quit \n1)Triangular star pattern \n2)Reverse Triangular star pattern\n 3)for merge traingular and reverse triangular star pattern..");
    scanf(" %c", &k); // space ni lagayenge to new line bhi le lega compiler sometimes..
    // printf("Enter the value:\n");
    // scanf("%f", &n);
    switch (k)
    {
    case 'q':
    {
      printf("Quiting the loop");
      goto end;
      //   break;
    }
    case '1':
    {
      for (int i = 0; i < 5; i++)
      {
        for (int j = 0; j < i; j++)
        {
          printf("*\t");
        }
        printf("\n");
      }
      break;
    }
    case '2':
    {
      // Method 1:
      //   for (int i = 0; i < 5; i++)
      //   {
      //     for (int j = 4; j >i; j--)
      //     {
      // Method 2:
      for (int i = 1; i < 5; i++)
      {
        // for (int j = 5; j >i; j--)
        // for (int j = 0; j <5-i-1; j++)
        for (int j = 0; j < 5 - i; j++)
        {
          printf("*\t");
        }
        printf("\n");
      }
      break;
    }
    case '3':
    {
    //   for (int k = 1; k < 5; k++)
    //   {
    //     for (int i = 0; i < 5-k; i++)
    //     {
    //       if (k == 1)
    //       {
    //         for (int j = 0; j <  i; j++)
    //         {
    //           printf("*\t");
    //         }
    //         printf("\n");
    //       }
    //       if(k>1)
    //       {
    //       printf("*\t");
    //     }
    //     printf("\n");
    //   }
    // }
    case '4':
    {
      for (int i = 0; i < 5; i++)
      {
        for (int j = 0; j < i; j++)
        {
          printf("*\t");
        }
        printf("\n");
      }
        for (int i = 1; i < 5; i++)
      {
        for (int j = 0; j < 5 - i; j++)
        {
          printf("*\t");
        }
        printf("\n");
      }    break;
    }
  default:
    printf("\nThis type of pattern not available..\n\n");
  }

    }
    }
end : return 0;
}
// String is a character array in c string is not a data type in c..