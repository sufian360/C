#include<stdio.h>
#include<stdlib.h>
#include<time.h>
int random_num(int c)
{
    srand(time(NULL));
    return rand() % c;
}

int rock_paper_scissor(int a,int b)
{
    int result;
    if(a=='R' && b=='P')
    {
        result= 0;
        return result;
    }
    else if(a=='R' && b=='S')
    {
        result= 1;
        return result;
    }
    else if(a=='P' && b=='R')
    {
        result= 1;
        return result;
    }
    else if(a=='P' && b=='S')
    {
        result= 0;
        return result;
    }
    else if(a=='S' && b=='P')
    {
        result= 1;
        return result;
    }
    else if(a=='S' && b=='R')
    {
        result= 0;
        return result;
    }
    else if(a==b)
    {
        result= -1;
        return result;
    }
}
int getinput()
{
    int inp;
    do{
      printf("\nYour choice:");
      scanf("%d",&inp);
      if(!(inp>=1 && inp<=3))
      {
          printf("/nInvalid Number.Please Press 1,2 or 3/n.");
      }
    }while(!(inp>=1 && inp<=3));
    return inp;
}

int main()
{
    int n,i,cominp,gamenumber,userscore=0,compscore=0;
    char user,comp,choice[]={'R','P','S'};
    srand(time(NULL));
    printf("\t\t\t\t\tRock Paper Scissor\t\t\t\t\t");

    printf("\nPress 1 for Rock\nPress 2 for Paper \nPress 3 for Scissors\n\n");
    for(i=0;i<3;i++)
    {
        printf("\nRound %d",i+1);
        printf("\n--------\n");
        gamenumber=getinput();
        user=choice[gamenumber-1];//choice index start from 0 that's why gamenumber-1 in choice index. Because input start from 1.//
        printf("%c", user);
        printf("\nComputer choice:\n");
        cominp=random_num(3)+1;//random number start from 0 but computer input start from 1.that's why +1.
        comp=choice[cominp-1];
        printf("%c", comp);

        // computer and user increment the score
        if(rock_paper_scissor(user,comp)== -1)
        {
            printf("\nIt's Draw\n");
            /*userscore++;
            compscore++;*/
        }
        else if(rock_paper_scissor(user,comp)==1)
        {
            printf("\nYou WIN this round\n");
            userscore++;
        }
        else if(rock_paper_scissor(user,comp)==0)
        {
            printf("\nComputer WIN this round\n");
            compscore++;
        }
        printf("\nYour Score: %d",userscore);
        printf("\nComputer Score: %d\n",compscore);
    }
    printf("\n-------Winner------\n");
    // score compare
    if(userscore>compscore)
    {
        printf("\nYou WIN the match\n");
    }
    else if(userscore<compscore)
    {
        printf("\nComputer WIN the match\n");
    }
    else
    {
        printf("\nIt's a DRAW\n");
    }
}
