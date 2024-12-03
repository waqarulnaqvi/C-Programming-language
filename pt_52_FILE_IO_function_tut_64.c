/*Working With Files in C:-
1)When working with files, we have to declare a pointer of type FILE..
2)This declaration helps us to work with files through C program..
*/
/*Closing a File:-
1)Any File which is opened in a C program needs to be closed..
2)Closing a file is accomplished by the library function fclose()..
3)fclose(fptr); //fptr is the file pointer associated with file to be closed..

*/
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
int main()
{
    FILE *ptr = NULL;
    char string[79] = "This content wassss produced by tut_64.c\n";

    //******Reading a File*******
    // ptr=fopen("myfile.txt","r");
    // fscanf(ptr,"%s",string);
    // printf("The content of this file has %s\n",string);

    //******Writing a File*******
    // ptr = fopen("myfile.txt", "w");
    // fprintf(ptr, "%s", string);
    // printf("The content of this file has:\n%s", string);

    //******Appending a File*******
    ptr = fopen("myfile.txt", "a");
    fprintf(ptr, "%s", string);
    //  printf("The content of this file has:\n%s", string);
  fclose(ptr);
    return 0;
}