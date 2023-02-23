#include<stdio.h>
int main()
{

    float a,salary;
    scanf("%f",&a);
    if (a>=0.00 && a<=400.00)
    {
        salary = a+(a*0.15);
        printf("Novo salario: %.2f\n",salary);
        printf("Reajuste ganho: %.2f\n",salary-a);
        printf("Em percentual: 15 %%\n");

    }
    else if (a>400.00 && a<=800.00)
    {
        salary = a+(a*0.12);
        printf("Novo salario: %.2f\n",salary);
        printf("Reajuste ganho: %.2f\n",salary-a);
        printf("Em percentual: 12%%\n");
    }

    else if (a>800.00 && a<=1200.00)
    {
        salary = a+(a*0.10);
        printf("Novo salario: %.2f\n",salary);
        printf("Reajuste ganho: %.2f\n",salary-a);
        printf("Em percentual: 10% %\n");
    }

    else if (a>1200.00 && a<=2000.00)
    {
        salary = a+(a*0.07);
        printf("Novo salario: %.2f\n",salary);
        printf("Reajuste ganho: %.2f\n",salary-a);
        printf("Em percentual: 7%%\n");
    }
    else if (a>2000.00)
    {
        salary = a+(a*0.04);
        printf("Novo salario: %.2f\n",salary);
        printf("Reajuste ganho: %.2f\n",salary-a);
        printf("Em percentual: 4%%\n");
    }


    return 0;


}
