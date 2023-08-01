#include<stdio.h>
#include<stdlib.h>
#include<time.h>
int SnakeWaterGun(char you,char computer)
{
// return 1 if you win,-1 if you lose and 0 if draw
//draw
//ss gg ww
if(you==computer)
{
    return 0;
}
//not draw
//cases sg gs sw ws gw wg
if(you=='S' && computer=='G')
{
    return -1;
}
else if(you=='G' && computer=='S')
{
    return 1;
}
if(you=='S' && computer=='W')
{
    return 1;
}
else if(you=='W' && computer=='S')
{
    return -1;
}
if(you=='G' && computer=='W')
{
    return -1;
}
else if(you=='W' && computer=='G')
{
    return 1;
}
}
int main()
{
    char you,computer;
    srand(time(0));
    int number= rand()%100 +1;
    if(number<33)
    {
        computer='S';
    }
    else if(number>33 && number<66)
    {
        computer='W';
    }
    else
    {
        computer='G';
    }

    computer='S';
    printf("Enter 'S' for snake, 'W' for water and 'G' for gun\n");

    scanf("%c",&you);
    int result=SnakeWaterGun(you,computer);
    if(result==0)
    {
        printf("Game Draw!!!\n");
    }
    else if(result==1)
    {
        printf("You win!!!\n");
    }
    else{

        printf("You lose!!!\n");
    }
    printf("You chose %c and computer chose %c.",you,computer);

    return 0;
}