#include <stdio.h>
// the of calls exponentially grow hoti hai recursion me to jo kaam iteration se aasane se kar sakte wo be wajha recursion se complex banna dete hai hum log or uski time complexitiy badha dete hai humlog recursion se bewajha..
// The case at which function doesn't recur is called the base case..
// The instances where the function keeps calling itself to perform a subtask,is called the recursive case..
//the case which is not a base case is called a recursive case.. 
int fact(int num)
{
    if(num==0||num==1)
    {return 1;
    }
    else{
        return num *fact(num-1);
    }
}
int main()
{
    int n;
   printf("Enter a number \n");
   scanf("%d",&n);
   printf ("The factorial of %d is %d",n,fact(n));

    return 0;
}