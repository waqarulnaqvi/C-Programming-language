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
//cwh soln:-
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

char *replacWord(const char* str,const char *oldWord,const char *newWord)
{
    char *resultString;
    int i,count =0;
    int newWordLength =strlen(newWord);
    int oldWordLength =strlen(oldWord);
    for( i=0;str[i]!='\0';i++)
    {
        if(strstr(&str[i],oldWord)==&str[i])
        {
            count++;
            // Jump over this word..
            i=i+oldWordLength-1;
        }
    }
// Making a new string to fit in the replaced words..
resultString=(char *)malloc (i + count * (newWordLength - oldWordLength) + 1);
i=0; 
while(*str){
    //Compare the substring with result..
    if(strstr(str,oldWord)==str)
    {
        strcpy(&resultString[i],newWord);
        i+=newWordLength;
        str+=oldWordLength;
            }
            else{
                resultString[i]=*str;
                i+=1;
                str+=1;
            }
}
resultString[i]='\0';
return resultString;

}
int main()
{
         FILE *ptr = NULL;
         FILE *ptr2 = NULL;
     char str[200];

        // ptr = fopen("billi.txt", "r");//if file does not exists than no error but no file element which you store in correct file won't print..
        ptr = fopen("bill.txt", "r");
        ptr2 = fopen("genBill.txt", "w");
        fgets(str,200,ptr);
        printf("\nThe given bill template was:\n%s\n",str);

        //Call the replaceWord function and generate newStr
        char* newStr;
        newStr=replacWord(str,"{{item}}", "Table Fan" );

        // newStr=replacWord(newStr,"{{name}}" , "Harry" );//same result..
        // newStr=replacWord(newStr,"{{outlet}}" , "Ram Laxmi fan outlet" );//same result..

        newStr=replacWord(newStr,"{{outlet}}" , "Ram Laxmi fan outlet" );//same result..
        newStr=replacWord(newStr,"{{name}}" , "Harry" );//same result..

        printf("\nThe actual bill generated is:\n%s\n",newStr);
        printf("\nThe generated bill has been written to the file genBill.txt..\n");
        fprintf(ptr2,"%s",newStr);

  fclose(ptr);
  fclose(ptr2);
    return 0;
}