/*WAP to make fibonacci series  with Iterative,Recursive Approach
to the element index number 42..*/
#include <stdio.h>
// Call by value:-
int fibrec(int n){
  if(n<2)
  {
    return 1;
  }
  //tips : when we start index from 1..
  //if(n==1 || n==2)
  //{
 //return n-1;
//  }
  else{
    return fibrec(n-1)+fibrec(n-2);
  }
}
void fibiter(int n)
{
    int a=1,b=1,c;
    printf("1\t1\t");
    for(int i=2;i<=n;i++)
    {
      // Method 1:
     c=a+b;
     a=b;
     b=c;
     /*
     b=a+b;
     a=b-a; 
     */
     printf("%d\t",c);      
    }
}
void fibiter10(int n)
{
    int a=0,b=1;
    printf("0\t");
    for(int i=2;i<=n;i++)
    // for(int i=1;i<=n;i++)//to compare the fibiter10 and fibiter21 logic and both the logic is correct..
    {
     b=a+b;
     a=b-a; 
     printf("%d\t",a);//if you want index start at 0
    }
}
void fibiter21(int n)
{
    int a=0,b=1;
    printf("0\t1\t");
    for(int i=2;i<=n;i++)
    {
     b=a+b;
     a=b-a; 
     
     printf("%d\t",b);//if you want index start at 1
    }
}
int  fibiter100(int n)
{
    int a=0,b=1;
    for(int i=0;i<n-1;i++)
    {
    
     b=a+b;
     a=b-a;
           
    }
    return a;//if you want index start at 0
  
}
int  fibiter210(int n)
{
    int a=0,b=1;
    for(int i=0;i<n-1;i++)
    {
    
     b=a+b;
     a=b-a;
           
    }
    return b;//if you want index start at 1
  
}
int main()
{
    int n;
    printf("Enter the index of fibonacci series:");
    scanf("%d",&n);    
    // printf("\nfibonacci series by iteration:\n");
    //  fibiter(n);
    // printf("\nfibonacci series by recusion: %d\n",fibrec(n));
    fibiter10(n);//actual parameters 
    printf("\nfibonacci series by iteration 0 : %d\n",fibiter100(n));
    fibiter21(n);//actual parameters 
    printf("\nfibonacci series by iteration 1 : %d\n",fibiter210(n));
}
