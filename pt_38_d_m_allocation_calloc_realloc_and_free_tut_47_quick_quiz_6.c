
// heap is called a dynamic memory..
// heap allocation is called a dynamic memory allocation..
/*In dynamic memory allocation, the memory is allocated at runtime from the heap segment..
We have four functions that help us achieve Dynamic memory allocation(this task):
1)malloc
2)calloc
3)realloc
4)free
*/
#include <stdio.h>
#include <stdlib.h> //calloc ,malloc ,realloc & ,free all are defined in a stdlib.h..
int main()
{
    // use of malloc() :In malloc all the values at allocated memory are initialized to garbage values..
/*   int *ptr;
    printf("Enter the size of the array you want to create:\n");
    int n;
    scanf("%d",&n);//In dynamic memory allocation memory will be allocated at the run time..
    

    ptr = (int *)malloc(n * sizeof(int));//Dynamically allocated array..
    // for(int i=0;i<n;i++)
    // {
    //     printf("Enter a value number %d of this array:\n",i);
    //     scanf("%d",&ptr[i]);
        
    // }

  printf("Values of the dynamically allocated array is: \n");
    // for(int i=0;i<n+1;i++)//more than arry length print garbage value..
    for(int i=0;i<n;i++)
        {//if no input will be taken than malloc will automatically initialized all the values by garbage values..
        printf("%d\t",ptr[i]);       
    }*/

    // use of calloc() :In calloc all the values at allocated memory are initialized at 0..
       int *ptr;
    printf("Enter the size of the array you want to create:\n");
    int n;
    scanf("%d",&n);//In dynamic memory allocation memory will be allocated at the run time..
    
    ptr = (int *)calloc(n, sizeof(int));//Dynamically allocated array..
    for(int i=0;i<n;i++)
    {
        printf("Enter a value number %d of this array:\n",i);
        scanf("%d",&ptr[i]);  
        //quick_quiz_6:pt_1:
        // if(i==4)//All the memory space before 2 will be freed..
        // {
        //     free(ptr);
        // }    
    }
    // quick_quiz_6:pt_2:
    // free(ptr);//All the memory space before 2 will be freed..

  printf("Values of the dynamically allocated array is: \n");
    // for(int i=0;i<n+1;i++)//more than arry length print garbage value..
    for(int i=0;i<n;i++)
    {//if no input will be taken than calloc will automatically initialized all the values by 0..
    //initializing 0 is a extra overhead and extra work and it increase the inefficiency in your program..
        printf("%d\t",ptr[i]);     
    }

// use of realloc():
//    int *ptr;int n;//ek hi variable ko do baar declare ni kar sakte c me..
    printf("\n\nEnter the size of the New array you want to create:\n");
    
    scanf("%d",&n);//In dynamic memory allocation memory will be allocated at the run time..
    
    ptr = (int *)realloc(ptr,n*sizeof(int));//Dynamically allocated array..
    for(int i=0;i<n;i++)
    {
        printf("Enter a value number %d of this array:\n",i);
        scanf("%d",&ptr[i]);
        
    }

  printf("Values of the dynamically allocated new array is: \n");
    for(int i=0;i<n;i++)
        {
        printf("%d\t",ptr[i]);       
    }
  free(ptr);//yeah memory ko free kar dega and it is a good practice..
    return 0;
}