/*Last_Exercise:14
WAP to to calculate distance using Euclidean distance formula and than make a circle using using that distance.. */ 
#include <stdio.h>
#include <math.h>
// const double PI=3.141592;
const float PI=3.141592;
float Edistance(float x1, float y1, float x2, float y2)
{
  float d=sqrt(pow(x2-x1,2)+pow(y2-y1,2));
return d;
}

void power()
{
    printf("power is %f\n",pow(2,4));
    printf("power is %f",sqrt(64));
}
float areaOfCircle(float(*fptr) (float ,float,float ,float ) ,float a ,float b,float c,float d)
{
printf("\nThe Distance between x1,x2,y1&,y2 points in cartesian plane is %f",fptr(a,b,c,d));
float r=fptr(a,b,c,d);
printf("\nArea of circle with that distance is %f",(PI*r*r));

/*float .2f print 2 decimal value...
printf("\nThe Distance between x1,x2,y1&,y2 points in cartesian plane is %.2f",fptr(a,b,c,d));
float r=fptr(a,b,c,d);
printf("\nArea of circle with that distance is %.2f",(PI*r*r));
*/
}
void main()
{
     float (*fptr) (float ,float,float,float );//same..//Declaring a function pointer..
    // int (*fptr) (int a,int b);//same..//Declaring a function pointer..
    float x1,y1,x2,y2;
    printf("Enter x1 axis:");
    scanf("%f",&x1);
    printf("Enter y1 axis:");
    scanf("%f",&y1);
    printf("Enter x2 axis:");
    scanf("%f",&x2);
    printf("Enter y2 axis:");
    scanf("%f",&y2);
//  printf("power is %f",Edistance(2.889,2,3,3));
// power();
    //    fptr=&Edistance;//same..
       fptr=Edistance;//same..
       areaOfCircle(fptr,x1,y1,x2,y2);
    // return 0;
}