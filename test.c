#include <stdio.h>
int main()
{
  int a[3][3];  
  int m,n;
  printf("Enter a m number:");
  scanf("%d",&m);
  printf("Enter a n number:");
  scanf("%d",&n);
  for(int i=0;i<m;i++)
  {
  for(int j=0;j<n;j++)
  {
    printf("Enter value at a[%d][%d]=",i,j);
    scanf("%d",&a[i][j]);
  }
  }
  for(int i=0;i<m;i++)
  {
  for(int j=0;j<n;j++)
  {
    printf("\t%d\t",a[i][j]);
  }
  printf("\n");
  }
    return 0;
}