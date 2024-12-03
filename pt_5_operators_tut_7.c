#include<stdio.h>
int main(int argc, char const *argv[])
{
    // Airthmetic Operator.
    // float a=34,b=6;
    // printf("a+b=%f\n",a+b);
    // printf("a*b=%f\n",a*b);
    // printf("a-b=%f\n",a-b);
    // printf("a/b=%f\n\n",a/b);
    
    //Relational Operator.
    int a=2,b=0;
    printf("a == b=%d\n\n",a==b);

    //logical Operator.
    printf("a && b=%d\n",a&&b);
    printf("a || b=%d\n",a||b);
    printf("!a= %d, !b=%d\n\n",!a,!b);

    //Bitwise Operator.
    printf("a & b=%d\n",a&b); //AND.
    printf("a | b=%d\n",a|b); //OR.
    printf("a ^ b=%d\n",a^b); //XOR(eXCLUSIVE OR).

    return 0;

    // oTHER BITWISE OPERATOR.
// ~ IS THE BINARY ONE'S COMPLEMENT OPERATOR.
// << IS THE BINARY LEFT SHIFT OPERATOR.
// >> IS THE BINARY RIGH SHIFT OPERATOR.
/*
in programming languages, the associativity of an operator is a property that determines how operator of the same precedence are grouped in the absence of parenthesis.
*/
}
