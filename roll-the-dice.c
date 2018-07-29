/*
---
githubHandle: brianwachira

---
*/

#include <stdio.h>
#include <ctype.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

void exit();

char choice;
int roll,i;

int main()

{
int diceroll,total,diceroll2;

srand((unsigned)time(NULL));

 puts("Hello\n");
 do
 {

 puts("This is a dice game");
 printf("Type the number of times you want to roll my dice\n");
 puts("\nNB :\aLIMIT-(6 TIMES)\n");
 roll=abs(roll);
 scanf(" %d",&roll);

if ( roll == 'x')
{
void exit();
}
 system("cls");
 for(i=1;i<roll+1;i++)
 {
  diceroll=( rand ()%6 ) + 1;

  printf("\nOUTCOME %d: %d \n",i,diceroll);


 }
 diceroll2=(rand ()%6 ) + 1;
printf("What do you think your next outcome will be?\n\t(higher\tLower\tSame\n\t\t(h or l or s)\n\n");
scanf(" %c",&choice);

if(choice=='h' || choice=='H')

    {
     printf("\nOUTCOME : %d\n",diceroll2);
if(diceroll2>diceroll)
{
    printf("\nCorrect!\n");
}else
{
    printf("\nWrong!Better luck next time\n");
}

    }

if(choice=='S' || choice=='s')

    {
     printf("\nOUTCOME : %d\n",diceroll2);
if(diceroll2==diceroll)
{
    printf("\nCorrect!\n");
}else
{
    printf("\nWrong!Better luck next time\n");
}

    }

  if(choice=='l' || choice=='L')

    {
     printf("\nOUTCOME : %d\n",diceroll2);
if(diceroll2<diceroll)
{
    printf("\nCorrect!\n");
}else
{
    printf("\nWrong!Better luck next time\n");
}

    }
 }while(i<90);


 return 0;
}

void exit()
{
return 0;
}