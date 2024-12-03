#include<stdio.h>
/* type conversion means agar aap 
1) (int) (int) me  koi bhi operation karenge to uska result int hoga as example given below.
2) (int) (float) me koi bhi operation karenge to uska result float hoga.
3) (float) (int) me koi bhi operation karenge to uska result float hoga.
4) (float) (float) me koi bhi operation karenge to uska result float hoga.
and so on.....
*/
// Type casting syntax
//  (Type) value;
int main()
{
float a= 54/5;
float b=(float) 54/5;
float c= 54/5.0;
float d= 54.0/5;
int e=43;
//integer or integer me agar hum koi arithmetic karte to uska result integer hi hota..
//type conversion in c it means when we two data type of same type the value will be converted to that data type..
   printf("The value of  a is %f\n b is %f\n c is  %f\n d is %f\n e is %f\n"
   ,a, b,c,d,(float)e);
    return 0;
}