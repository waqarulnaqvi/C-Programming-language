//String is a character array in c string is not a data type in c.. 
//plan and simple scanf se hum white spaces ni le paayenge isliye puts recommended hai scanf ni string ko user input lene ke liye..
#include <stdio.h>
void printstr(char str[])
{
    int i=0;
    while(str[i]!='\0')
    {
        // printf("%s",str[i]);//Error won't run..
        printf("%c",str[i]);
        i++;
    }
}
int main()
{//end me null character ni hai to c me wo ek valid string ni hai..
    // char str[]={'g','a','b','e','\0'};//it is also called null terminated character array..
    // char str[3]="gabe";//Error string(character array) length is incompatable..
    // char str[4]="gabe";//garbage value print in the end of string because null character array not found..
    char str[5]="gabe";//perfect string length..
    //compiler isko (char str[]={'g','a','b','e','\0'};) ese interpret kar lega khud se..//it is also called null terminated character array..
    // char str[]={'g','a','b','e'}; Output:gabe♀ a //♀ a is a garbage value..
     printstr(str);

//User input:-
printf("\nEnter String:\n");
char star[34];//We can take maximum 33 length character..
gets(star);//input from user..
// printstr(star);
// printf("\nprinting string:- %c\n",star);//String won't print only one dot . print
// printf("\nprinting string:- \n",star);//Run
printf("\nprinting string:-\n%s",star);
printf("\nUsing Custom function:-\n");
printstr(star);
printf("\nPrinting string using puts:\n");
puts(star);
    return 0;
}