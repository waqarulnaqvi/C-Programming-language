// flow of c programs..
//preprocessing->compilation-?assembly->linking-.loading..
//sabse end me aapka program aake ram me load hota hai..
//memory means ram in c
//ram jitti zada utte zada program ko aap khol paate ho kyuki saare program ko ram me load hona hota hai..
/*
What is variable ?
1)a name given to a memorry location..
2)Declared by writing type variable_name;
3)Initialized and declared by type variable_name = value;
//ek memory location ko diya hua naam variable hota hai..
//variable ki basic unit me 0 ya 1 store hota hai..
//declare ka matlab->int a,b,c,d,e; ->iske liye seat chor do yeah hum use karne wale hai space ko yeah reserve kar de rahe hai..
initialization matlab int a=4;us memory location pe value bhi de do..

Rules for defining a variable in c

1)can contain alphabets,digits , and underscore(_)
2)a variable name can start with an alphabet and underscore only.
3)can't start with a digit.
4)no white space and reserved keyword is allowed 
5)valid variable names:int harry,float harry123,char _harry34;
6)invalid variable names:$harry,int 77harry,char long;

DATA types in c

1)Basic data types :int,char,float,double
2)Derived Data type:array pointer ,Structure ,union
3)Enumeration Data Types:emum
4)Void Data Type:void

void ka matlab c me hota hai kxh ni khali..
*/

#include <stdio.h>

int main(int argc, char const *argv[])
{
    
    printf("%lu\n",sizeof(int));
    printf("%lu\n",sizeof(float));
    printf("%lu\n",sizeof(char));
    printf("%lu\n",sizeof(double));
    return 0;
}
