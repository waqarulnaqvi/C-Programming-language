// union is almost similar to structure.. 
// union is also a user defined defined data type..
/*
1)Union is a user-defined data type(very similar to structures)...
2)The difference between  structures and unions lies in the fact that in structure, each member has its own storage location,whereas members of a union uses a single shared memory location...
3)This single shared memory location is equal to the size of its largest data member...
4)Like Structure ,we access any member by using the member access operator(.) in unions...
5)We use keyword union to define a union...
5)Syntax is very similar to that of structure...
*/
// struct student 
// {
//     float marks;//4 byte 
//     int id;//4 byte
// }s1;//structure uses 8 byte of data...
// union student
// {
//     float marks;//4 byte 
//     int id;//4 byte
// }s1;//union uses 4 byte of memory shared between id and marks...
#include <stdio.h>
#include <string.h>
// struct Student
// {
//     int id;
//     int marks;
//     char fav_char;
//     char name[34];
// };
// struct Student s1;
union Student//unon is used make a good memory manegement program..
{
    int id;
    int marks;
    char name[34];
    char fav_char;
};
union Student s1;

int main()
{
    // struct Student s1;
   strcpy(s1.name,"Waqarul");
   s1.marks=45;
   s1.fav_char='u';
   s1.id=1;//union kya karega sabse high memory ka union banayega or ussi ko poori union me share kar dega..
   //jo sabse end me likh ho wo run hoga baaki sab corrupt ho jaayega..
   //4 members me se koi bhi ek member active ho sakta hai union me..
   printf("The id is %d \n",s1.id);
   printf("The marks is %d \n",s1.marks);
   printf("The fav_char is %d \n",s1.fav_char);
   printf("The name is %s \n",s1.name);

    return 0;
}