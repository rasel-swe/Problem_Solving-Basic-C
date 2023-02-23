
#include<stdio.h>
int main()
{
    int Start_tm,End_tm,duration;
    scanf("%d %d",&Start_tm,&End_tm);
    if (Start_tm<End_tm)
    {
       duration = End_tm-Start_tm;
       printf("O JOGO DUROU %d HORA(S)\n",duration);
    }
    else if (Start_tm>End_tm)
    {
        duration = 24-(Start_tm - End_tm);
        printf("O JOGO DUROU %d HORA(S)\n",duration);
    }
    else if (Start_tm == End_tm)
    {
        printf("O JOGO DUROU 24 HORA(S)\n");
    }

return 0;

}
