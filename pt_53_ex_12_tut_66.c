/*
Problem Statement:-
Suppose you have a template letter.txt. You have to fill in values to a template. Letter.txt looks something like this:

Thanks {{name}} for purchasing {{item}} from our outlet {{outlet}}. Please visit our outlet {{outlet}} for any kind of problems. We plan to serve you again soon.

You have to write a program that will automatically fill the template.For this, read this file and replace these values:

{{name}} - Harry 

{{item}} - Table Fan 

{{outlet}} - Ram Laxmi fan outlet

Use file functions in c to accomplish the same.
*/
#include <stdio.h>
#include <string.h>
// #include <stdlib.h>
int main()
{
     FILE *ptr = NULL;
     char name[70], item[70],outlet[70];
     puts("Enter Your name:"); 
     gets(name);
     puts("Enter Your item:"); 
     gets(item);
     puts("Enter Your outlet:"); 
     gets(outlet);

        ptr = fopen("letter.txt", "a");
    fprintf(ptr, "Thanks %s for purchasing %s from our outlet %s. Please visit our outlet %s for any kind of problems. We plan to serve you again soon.\n\n", name,item,outlet,outlet);

     printf("\nThe content of this file has:\nThanks %s for purchasing %s from our outlet %s. Please visit our outlet %s for any kind of problems. We plan to serve you again soon.\n\n", name,item,outlet,outlet);
  fclose(ptr);
    return 0;
}