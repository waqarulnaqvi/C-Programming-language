/*Dynamic Memory Allocation:
ABC Pvt Ltd. manages employee records of other companies.
Employee Id can be of any length and it can contain any character
For 3 employees, you have to take 'length of employee id' as input in a length integer variable.
then, you have to take employee id as an input and display it on screen.
Store the employee id in a character array which is allocated dynamically.
You have to create only one character array dynamically

Example:
Employee 1:
Enter no. of character in you eId
45
dynamically allocate the character array.
take input from user

Employee 2:
Enter no. of character in you eId
15
dynamically allocate the character array.
take input from user

Employee 3:
Enter no. of character in you eId
25
dynamically allocate the character array.
take input from user
*/
#include <stdio.h>
#include <stdlib.h>
int main()
{
  int n, i = 0;
  char *ptr;
  char a, b;
  while (i < 3)
  {
    printf("\nEnter no. of character in you eId:\n");
    scanf("%d", &n);//apka enter input buffer me hai.. kyuki aapka enter input buffer me hai next scanf gayab ho jaayega Pichli wali value wo agle wale scanf ke liye valid character hai tabhi next value gayab ho jaayegi..
    getchar();//character jo aapne dabaya wo get char consume kar lega input buffer se taaki aap next value enter kar paaye..
    printf("Enter a  number 1:");
    scanf("%c", &a);//apka enter input buffer me hai.. kyuki aapka enter input buffer me hai next scanf gayab ho jaayega Pichli wali value wo agle wale scanf ke liye valid character hai tabhi next value gayab ho jaayegi..
    getchar();//character jo aapne dabaya wo get char consume kar lega input buffer se taaki aap next value enter kar paaye..
    printf("Enter a  number 2:");
    scanf("%c", &b);
    ptr = (char *)malloc((n + 1) * sizeof(char)); // Dynamically allocated array..
    puts("Enter your eId:");
    scanf("%s", ptr);
    printf("Your Employee Id is %s\n", ptr);
    free(ptr);
    i = i + 1;
  }

  return 0;
}