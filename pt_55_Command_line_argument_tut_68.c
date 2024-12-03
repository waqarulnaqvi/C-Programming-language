// python pip install is a command line argument..
// C programming scripting language is the fastest language compare to other scripting language..
#include <stdio.h>
int main(int argc, char const *argv[])
{//argc stores the index of the argument/string and argv store that argument/string..
//we simply write command line utility here in this program..
    printf("The value of argc is %d\n", argc);
    for (int i = 0; i < argc + 5; i++)
    { // index 0 value is a full path of the exe..
        printf("This argument at index number %d has a value of %s \n", i, argv[i]);//that's how we can use command line argument to make utility..
        // argc total index is total value of the loop..
        /*output :if "input is:-
        .\pt_55_Command_line_argument_tut_68.exe efefe(//all these argument like efefe etc is stored in the form of string in argv)"
The value of argc is 2
This argument at index number 0 has a value of C:\Users\HP\Desktop\c programming language\pt_55_Command_line_argument_tut_68.exe
This argument at index number 1 has a value of efefe
        */
    }
    return 0;
}

// argc contain number of arguments..
// argv contain all type of command line arguments..
// argv is a array of the pointer..
// if no args are passed than argc value is 1 lekin agar aapne argument pass kiye hai to jitte argument pass kiye hai wo 1 argc ki index value me jodhta jaata hai..
// first member/argument/canditate of the argv is a string which is the name of the program so agar koi bhi argument ni denge to 1 to aana hi aana hai..
// argv first string is the name of the program..