#include<stdio.h>
int main ()
{
    int A,B;
    scanf("%d %d",&A,&B);
    if (B%A)
    {
        printf("Nao sao Multiplos\n");
    }
    else
    {
        printf("Sao Multiplos\n");
    }
    return 0;
}
