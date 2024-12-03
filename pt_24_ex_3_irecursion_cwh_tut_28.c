// #include <stdio.h>
// // Call by value:-
// int fib1(int a, int b, int c)//formal parameters,formal argument..
// {
//     // if (c > 0)
//     if (c > 2)//1 and 2 index element already printed..
//     {
//         int sum = a + b;
//         printf("%d\t", sum);
//         a = b;
//         b = sum;
//     }
//     // fib(a, b, c - 1);
//     fib1(a, b, c -1);
// }
// int fib(int a, int b, int c)//formal parameters,formal argument..
// {
//     if (c > 0)
//     // if (c > 1)
//     {
//         b = a + b;
//         printf("%d\t", a);
//         a = b - a;
//     }
//     fib(a, b, c -1);
// }
// void fibiter(int a, int b, int c)//formal parameters,formal argument..
// {
//     for (int i = 1; i <=c; i++)
//     // for (int i = 0; i <c; i++)
//     {
//         b = a + b;
//         printf("%d\t", a);
//         a = b - a;
//     }
//     // fibiter(a, b, c - 1);loop will run 15 times..
//     //if I uncomment this than the output will be:-
//     // 0       1       1       2       3       5       8       13      21      34      55      89      144     233     377
// }
// int main()//Every c program execution starts from main function..
// {
//     int a, b, c;
//     printf("Enter series first number:\n");
//     scanf("%d", &a);
//     printf("Enter series second number:\n");
//     scanf("%d", &b);
//     printf("Enter the index where you want to print series:\n");
//     scanf("%d", &c);
//     // printf("\nFibonacci series method 1:\n");
//     // fib(a,b,c);//actual parameters 
//     // printf("Fibonacci series method 2:\n");
//     // printf("%d\t%d\t",a,b);
//     // fib1(a,b,c);
//     printf("Fibonacci series iteration method 3:\n");
//     fibiter(a, b, c);
//     return 0;
// }

// Call by value:-
 #include <stdio.h>
int fib(int a, int b, int c)//formal parameters,formal argument..
{
    // if (c > 0)
    if (c > 2)
    {
        int sum = a + b;
        printf("%d\t", sum);
        a = b;
        b = sum;
    }
    // fib(a, b, c - 1);
    fib(a, b, c -1);
}
int fib1(int a, int b, int c)//formal parameters,formal argument..
{
    if (c > 0)
    // if (c > 1)
    {
        b = a + b;
        printf("%d\t", a);
        a = b - a;
    }
    fib1(a, b, c - 1);
}
void fibiter(int a, int b, int c)//formal parameters,formal argument..
{
    for (int i = 1; i <=c; i++)
    {
        b = a + b;
        printf("%d\t", a);
        a = b - a;
    }
}
void fibiter(int a, int b, int c);
// #include <stdio.h>
//if you place stdio.h header file here after creating the function than there is a error (incompatable_built_in_function) because printf and scanf belong to the stdio.h header file..


int fib1(int a, int b, int c);//formal parameters,formal argument..

int main()//Every c program execution starts from main function..
{
    int a, b, c;
    printf("Enter series first number:\n");
    scanf("%d", &a);
    printf("Enter series second number:\n");
    scanf("%d", &b);
    printf("Enter the index where you want to print series:\n");
    scanf("%d", &c);
    printf("\nFibonacci series method 1:\n");
    printf("%d\t%d\t",a,b);
    fib(a,b,c);//actual parameters 
    // printf("Fibonacci series method 2:\n");
    // fib1(a,b,c);
    // printf("Fibonacci series iteration method 3:\n");
    // fibiter(a, b, c);
    return 0;
}