//%d is a format specifier for integer
//%f is a format specifier for float
#include <stdio.h>
#define PI 3.14
int main(){
int a =55;
float b=55.55;
printf("Hello World \n");
printf("The value of a is %d and b is %0.4f ",123,123.243234);
printf("The value of a is %-18.4f and b is %19.4f \n",b,123.243234);
//18 character ki space me print karna or pehle space chorna.. 
//19 character ki space me print karna or baad me space chorna..
/*
%c - character
%d - integer
%f - float
%l - long
%lf -double
%LF -longdouble
*/
const float b1= 4.4454;//value can't change..
printf("%f\n",b1);
// b1=b; Error
// PI=3.14;//Error
// PI=7.32;//Error
printf("the value of PI is %f ",PI); 
//Escape Sequence character :-(\n)-it is a single character,\t

}