// Append meaning jodh dena..
//w or w+ mode kissi bhi file ko pehle hi khali kar deta hai or new updated form wala print kar deta compiler..
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
int main()
{
    FILE *ptr=NULL;
 /*   ptr=fopen("myfile.txt","r");

    char c = fgetc(ptr);
    printf("The character I read was %c\n",c);
     c = fgetc(ptr);
    printf("The character I read was %c\n",c);
    fclose(ptr);
//    c = fgetc(ptr);
//     printf("The character I read was %c\n",c);//After closing the file(Output:The character I read was) 
//    c = fgetc(ptr);
//     printf("The character I read was %c\n",c);//After closing the file(Output:The character I read was) 
 

//    char str[0];//Run..
//    char str[1];//Run..
   char str[4];
   fgets(str,500,ptr);
   printf("The string is:\n%s\n",str);
*/

//   ptr=fopen("myfile.txt","w");//w or w+ mode kissi bhi file ko pehle hi khali kar deta hai to read karne ka koi matlab ni bantta hai..
// //    fputc('oefffe',ptr);//Error..
//    fputc('p',ptr);
//    fputs("This is harry",ptr);

//   ptr=fopen("myfile.txt","a");
//    fputc('p',ptr);
//    fputs("This is harry",ptr);

//   ptr=fopen("myfile.txt","r+");
//    fputc('p',ptr);
//    fputs("This is harry",ptr);

//   ptr=fopen("myfile.txt","a+");
//    fputc('p',ptr);
//    fputs("This is harry",ptr);

//   ptr=fopen("myfile.txt","w+");//w or w+ mode kissi bhi file ko pehle hi khali kar deta hai to read karne ka koi matlab ni bantta hai..
//    fputc('p',ptr);
//    fputs("This is harry",ptr);

   char str[4];
   fgets(str,5,ptr);
   printf("The string is:\n%s\n",str);

   fclose(ptr);
    return 0;
}