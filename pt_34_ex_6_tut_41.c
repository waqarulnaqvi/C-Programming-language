/*
Input:
<h1> This is a heading </h1>
Output:
This is a heading

Input:
<span> This is a heading </span>
Output:
This is a heading
*/
#include <stdio.h> 
#include <string.h>

void parser(char *string)
{
   int in=0,index=0;
   for(int i=0;i<strlen(string);i++)
   {
     if (string[i]=='<') 
    { in= 1;
     continue;
   }
   else if(string[i]=='>')
   {
    in=0;
   continue;
   }
   if(in==0)
    {  
    string[index]=string[i];
    index++;      
    }
}
string[index]='\0';
//removing the trailing spaces from the starting(left) and the end(right) of the string..
while(string[0]==' ')
{//removing the trailing spaces from the starting(left) of the string..
  for(int i=0;i<strlen(string);i++)
  {
    string[i]=string[i+1];
  }
}
while ((string[strlen(string)-1])==' ')
{
  string[strlen(string)-1]='\0';
}

}

/*
void parser2(char str[])//failed
{//removing the trailing spaces..
  int k=0;
for(int i=0;i<strlen(str);i++)
{
  if(str[i]==' ')
   printf("%s",str[i]);
   k++;
}
str[k]='\0';
}
*/

int main()
{  
   char string[]="<h1ary>         This is a heading.......          </h1ary>";
   char string1[]="<end> This is a end..</end>";
   parser(string); 
   printf("The parsed string is:\n%s",string);
   printf("%s",string1);
  //  parser2(string);
    return 0;
}