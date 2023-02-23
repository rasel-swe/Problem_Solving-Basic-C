#include<stdio.h>
int main()
{
    double x;
    int sum = 0;

    for (int i = 1; i<=6; i++){

        scanf("%lf",&x);

        if(x>0){
            sum = sum+i;
        }

    }
   printf("%lf valores positivos\n",sum);

}
