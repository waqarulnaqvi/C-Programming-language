// diverse means bhut tarha ka ki cheeze hai..
// India is a diverse religion country..
// Structure is a user defined data type..
// Structure ko hum (.)[it is called as "structure member operator"]operator se access karte hai similarily jaise hum array [0] access karte hai..
// (.)it is called as "structure member operator" To access the member of the structure ,we use this operator in between "Structure name"&"member name"..
// G.id ;-G=structure name ,id =member name..
// we can use the structures to create user defined data types in C..
#include <stdio.h>
#include <string.h>
struct Student
{
  int id;
  int marks;
  char fav_char;
  char name[34];
  // };
} waqarul, ravi, shubham;
void print()
{
  printf("Waqarul's name is :%s\n", waqarul.name);
}

// struct Student waqarul,ravi,shubham;//Global variable..//isko hum globally access ni kar sakte..
int main()
{
  // struct student waqarul,ravi,shubham;//Error Student s must be capital..
  // struct Student waqarul,ravi,shubham;//Local variable..//isko hum main function ke bahar access ni kar sakte..if it is a local variable than print user defined function through an error..
  // char str[0]="waqarul";
  // char str[1]="ravi";
  // char str[2]="shubham";
  waqarul.id = 1;
  shubham.id = 2;
  ravi.id = 3;
  waqarul.marks = 123;
  shubham.marks = 223;
  ravi.marks = 323;
  waqarul.fav_char = 'a';
  shubham.fav_char = 'b';
  ravi.fav_char = 'c';

  printf("Waqarul got %d marks \n", waqarul.marks);
  printf("Waqarul got %d marks \n", waqarul.marks);

  strcpy(waqarul.name, "harry potter student of the year");
  printf("Waqarul's name is :%s\n", waqarul.name);

  // ravi.name[78]="bihari harry potter student of the year";//Error..
  // strcpy(ravi.name,"bihari harry potter student of the year");
  printf("ravi's name is :%s\n", ravi.name); // garbage value
  print();
  /* quick_quiz_5:
   print all the information of a given student..
   */
  //  for(int i=0;i<3;i++)
  //  {
  //    printf("%s your id is \n",str[i]);
  //    printf("%s you got marks \n",str[i]);
  //    printf("%s your fav_character is \n",str[i]);
  //  }
  return 0;
}