/*
Write a program to reverse the array and use the function
using swapping techniques..
*/
void normalarray(int *ptr, int n);
// void normalarray(int *ptr,int n){}/Error
// void arrayrev(int a[ ],int n){}//Error
void arrayrev(int a[], int n);
#include <stdio.h>
int main()
{
    //   int n=5;//when we input the number value will be updated..
    int n;
    // int a[n];//logical Error..
    puts("Enter the length of the array:");
    scanf("%d", &n);
    //   int a[3];//jitt iska size hoga utta hi array chalega..
    int a[n]; // jitt iska size hoga utta hi array chalega..
    //   int a[10]={1,2,3,4,5};

    //   scanf("\n\n\n\n\n\n%d\n\n\n",&n);//conclusion \n does give next line if used with the scanf..
    /*Output:
    Enter the length of the array:
5
1
a[0] = a[1] = 2
a[2] = 3
a[3] = 4
a[4] = 5
1       2       3       4       5
    */
    for (int i = 0; i < n; i++)
    {
        printf("a[%d] = ", i);
        scanf("%d", &a[i]);
    }

    printf("\nValue of array before function calls :\n");
    normalarray(a, n);
    printf("\nValue of array after function calls :\n");
    arrayrev(a, n);
    // normalarray(a,n);
    return 0;
}
void normalarray(int *ptr, int n)
{
    for (int i = 0; i < n; i++)
    {
        printf("%d\t", *(ptr + i));
    }
}
void arrayrev(int a[], int n)
{
    // for (int j = 0; j < n; j++)//if you run loop to n than value won't change value will be printed same as it is printed earlier..
    for (int j = 0; j < n/2; j++)
    {
        // Swapping by 3 variable..
        //  int k=a[j];
        //  a[j]= a[n-j-1];
        //  a[n-j-1]=k;

        // Swapping by 2 variable..
        a[j] = a[n - j - 1] + a[j];
        a[n - j - 1] = a[j] - a[n - j - 1];
        a[j] = a[j] - a[n - j - 1];
    }

    for (int i = 0; i < n; i++)
    {
        printf("%d\t", *(a + i));
    }
}
