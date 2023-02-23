#include<stdio.h>
int main()
{

    float x;
    int sum = 0;
    int i;

    for (i=1; i<=6; i++)
    {

        scanf("%f",&x);
        if (x>0)
        {

            sum = sum+1;
        }
    }
    printf("%d valores positivos\n",sum);
    return 0;

}
