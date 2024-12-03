#include <stdio.h>

int main()
{
    // int i,age;
    // for (int i = 1; i < 10; i++)
    // {
    //     // printf( "%d) Enter your age\n"); agar modulus d ke baad koi value ni denge to wo address le lega..
    //     printf( " %6i) Enter your age:\n",i);
    //     //variable ka naam % ke saath likh do us ki value print ho jaayegi or jitta number us variable ke aage likhoge utti space print ho jaayegi.. 
    //     // printf( " %10d) Enter your age\n",i);
    //     //%d ke aage jitte number likh do utti us number ki digit barabar space print ho jaayegi..
    //     scanf("%d",&age);
    //     //scanf kehta hai koi bhi integer double ya koi bhi type ka variable de do mai uske address me value daal dunga..
    //     if(age>10)
    //     {
    //         break;
    //     }
    //     if(age==5)
    //     {
    //         continue;
    //     }
    //     printf("Hello friends chai pee loo");
    // }

// Quick quiz 2:
// WAP to convert celcuis to fahrehit and gram to kilogram and vice versa..
printf("Which conversion do you want: \n 1)Celcius to fahrenheit\n 2) fahrenheit to celcius\n 3)gram to kilogram\n 4)kilogram to gram\n");
int c;
scanf("%d",&c);
switch (c)
{
case 4:{
 printf("Enter value in kg: ");
    float k;
    scanf("%f",&k);
    k*=1000;
    printf("Fahrenheit value is %f g: ",k);
    break;
}
case 3:{
 printf("Enter value in g: ");
    float k;
    scanf("%f",&k);
    k/=1000;
    printf("Fahrenheit value is %f kg: ",k);
    break;
}
case 2:
{
    printf("Enter value in F: ");
    float k;
    scanf("%f",&k);
    k=(k-32)/1.8;
    printf("Fahrenheit value is %f C: ",k);
    break;
}
case 1:
{
    printf("Enter value in C: ");
    float k;
    scanf("%f",&k);
    k=(k*1.8)+32;
    printf("Fahrenheit value is %f F",k);
    break;
}
default:
    printf("This type of conversion is invalid\n");
}
return 0;
}