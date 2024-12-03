/*Create Rock, Paper & Scissors Game
Player 1: rock
Player 2(computer ): scissors -->player 1 gets 1 point
rock vs scissors - rock wins
paper vs scissors - scissors wins
paper vs rock - paper wins
Write a C program to allow user to play this game three times with computer.Log the scores of computer and the player. Display the name of the winner at the end..
Notes : You have to display name of the player during the game. Take users name as an input from the user..
*/
#include <sTdio.H>
#include <stRing.h>
#include <STDLIB.H>
#include <tiMe.h>

int generateRandomNumber(int n) // srand take seed as an input and is defined inside stdlib.h..
{
    srand(time(NULL));
    return rand() % n + 1;
}

int greater1(char char1,char char2)
{
    //For rock paper scissors - Returns 1 if c1>c2 and 0 otherwise. If c1==c2 it will return -1..
    if(char1==char2)
    {
        return -1;
    }
    else if((char1 == 'r')&&(char2== 's'))
    {
        return 1;
    }
    else if((char2 == 'r')&&(char1== 's')){
        return 0;
    }
    else if((char1 == 'p')&&(char2== 'r'))
    {
        return 1;
    }
    else if((char2 == 'p')&&(char1== 'r')){
        return 0;
    }
    else if((char1 == 's')&&(char2== 'p'))
    {
        return 1;
    }
     else if((char2 == 's')&&(char1== 'p')){
        return 0;
    }
}

int greater(char char1,char char2)
{
    //For rock paper scissors - Returns 1 if c1>c2 and 0 otherwise. If c1==c2 it will return -1..
     if((char1 == 'r')&&(char2== 's'))
    {
        return 1;
    }
    else if((char2 == 'r')&&(char1== 's')){
        return 0;
    }
    else if((char1 == 'p')&&(char2== 'r'))
    {
        return 1;
    }
    else if((char2 == 'p')&&(char1== 'r')){
        return 0;
    }
    else if((char1 == 's')&&(char2== 'p'))
    {
        return 1;
    }
     else if((char2 == 's')&&(char1== 'p')){
        return 0;
    }
    else{//when char1 and char2 both are equal and when computer and player choose the same thing..
        return -1;
    }
}

void who_win(int p ,int c,char name[5000])
{
if(p>c)
{
    printf("Congratulations! %s(YOU) WON..\n",name);
}
else if(p<c)
{
    printf("Computer win the game..");
}
else{
    printf("It's a draw..");
}
}

void main()
{
    char name[3434];
    printf("\nPlease Enter Your name:\n");
    gets(name);
    
    printf("This is a  Rock, Paper & Scissors Game..\n   %s(You) are a Player 1\n   Computer is a Player 2\n\tRules:\t\t\n1)rock vs scissors - rock wins.\n2)paper vs scissors - scissors wins.\n3)paper vs rock - paper wins..", name);

    int n, a, b, playerscore = 0,compscore=0;
    char dic[] = {'r', 's', 'p'};
    char Playerchar, compchar;
    printf("\n\nHow many times do you want to play this game:\n");
    scanf("%d", &n);
    for (int i = 0; i < n; i++)
    {
        printf("\nPlease enter your choice  1)Rock  2)Paper  3)Scissors..  \n");
        //PLayer 1:
        printf("PLAYER 1'S Turn:");
        scanf("%d", &b);
        getchar();
        Playerchar = dic[b - 1];
        printf("You choose %c\n\n",Playerchar);
       //Computer:
       printf("COMPUTER'S Turn:\n");
        a = generateRandomNumber(3);
        compchar = dic[a-1];
        printf("Computer choose %c\n",compchar);

 if(greater(compchar,Playerchar)==1)
 {
   compscore+=1;
   printf("CPU Got it!\n");
 } 
 else if(greater(compchar,Playerchar)==-1)
 {
   compscore+=1;
   playerscore+=1;
   printf("It's a Draw!\n");
 } 
 else{
    playerscore +=1;
    printf("YOU Got it!\n");
 }
    printf("\nScore:\nComputer Score:%d\n(YOUR)%s Score:%d\n\n",compscore,name,playerscore);
    }
who_win(playerscore,compscore,name);
    }