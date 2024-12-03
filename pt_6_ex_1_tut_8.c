// Print Multiplication table of a number entered by the user in pretty form.
/*Example:
Input
Enter the number you want multiplication table of:
6
Table of 6:
6 x 1= 6
6 x 2 =12
6 x 3= 18
.
.
.
.
.
.
6 x 10 =60

*/
// #include<stdio.h>
// int main(int argc, char const *argv[])//command line elements int argc, char const *argv[]
// {
//     int n;
//     printf("Enter the number you want multiplication table of:");
//     scanf("%d",&n);
//     printf("Table of %d:\n",n);
//     for (int i = 1; i <=10; i++)
//     {
//         printf (" %d x %d = %d\n",n,i,n*i);
//     }
    
//     return 0;
// }


//Extra space logic before 6X1 multiplication otherwise program is same..
#include<stdio.h>
int main(int argc, char const *argv[])//command line elements int argc, char const *argv[]
{
    int n;
    printf("Enter the number you want multiplication table of:");
    scanf("%d",&n);
    printf("Table of %d:\n ",n);
    for (int i = 1; i <=10; i++)
    {
        printf (" %d x %d = %d\n ",n,i,n*i);
    }
    
    return 0;
}
