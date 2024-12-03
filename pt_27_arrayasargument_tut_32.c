#include <stdio.h>
/*
1)if you try to print element more than array length.,
2)it will run but either it repeat element or it will print address.. */
// cluter means messy ho jaana..
// Call by values:-
int funcmul(int a[2][3]) // formal parameters
{
    for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            printf("%d\t", a[i][j]);
        }
        printf("\n");
    }
}
int funcmul1(int a[2][3]) // formal parameters
{
    for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            printf("%d\t", *(a+i+j));//doesn't value of multi dimension array
        }
        printf("\n");
    }
}
int funcmul2(int *ptr) // formal parameters
{
    for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            printf("%d\t",*(ptr+i+j) );
        }
        printf("\n");
    }
}
int func1(int a[]) // formal parameters
{
    for (int i = 0; i < 4; i++)
    {
        //    printf("The value at %d is %d\n",i,a[i]);
        printf("The value at %d is %d\n", i, *(a + i));
    }
    a[0] = 420;
}
// Call by reference:-
void func2(int *ptr)
{
    for (int i = 0; i < 4; i++)
    {
        //    printf("The value at %d is %d\n",i,ptr[i]);
        printf("The value at %d is %d\n", i, *(ptr + i));
    }
    *(ptr + 2) = 4298;
}
int main()
{
    // 1D Array..
    int arr[] = {
        111,
        22,
        321,
        423,
        523,
    }; // Run
    printf("The value of array is %d at 0 index\n", *arr);
    printf("The value of array is %d at 1 index\n", *(arr+1));
    //   printf("Before function call Value of arr[0] =%d\n",arr[0]);
    // func1(arr); // actual parameters
    //   //yha per array ki copy pass ni hogi bulki actual array pass hoga..
    //   printf("After function call Value of arr[0] =%d\n",arr[0]);
    // printf("\nAfter function call:\n ");
    // func2(arr);
    // printf("\nAfter function call:\n ");
    // func2(arr);

    // 2D Array..
    int m[2][3] = {{
                       4,
                       5,
                       6,
                   },
                   {1, 2, 3}};
    // funcmul(m);
    // printf("\nAfter function call:\n ");
    // funcmul1(m);//print address..
    // printf("\nAfter function call:\n ");
    // funcmul2(m);

    return 0;
}