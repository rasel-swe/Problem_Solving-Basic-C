#include<stdio.h>
int main()
{
    double n,x;
    scanf("%lf",&n);

    if (n>=0.00 && n<=2000.00)
    {

        printf("Isento\n");
    }

    else if (n>=2000.01 && n<=3000.00)
    {

        x = (n-2000.00)*0.08;
        printf("R$ %.2lf\n",x);

    }
    else if (n>=3000.01 && n<=4500.00)
    {
        x = (n-3000.00)*0.18+1000.00*0.08;
        printf("R$ %.2lf\n",x);
    }
    else if (n>4500.00)
    {
        x = (n-4500.00)*0.28+1500.00*0.18+1000.00*0.08;

        printf("R$ %.2lf\n",x);
    }
    return 0;

}
