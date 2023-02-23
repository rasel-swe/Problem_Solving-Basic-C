#include<stdio.h>
int main()
{

    double A,B,C,X;
    scanf("%lf %lf %lf", &A, &B, &C);

    if (A<B)
    {
        X = A;
        A = B;
        B = X;

    }
    if (A<C)
    {
        X = A;
        A = C;
        C = X;
    }


    if (A>=(B+C))
    {
        printf("NAO FORMA TRIANGULO\n");
    }
      if (A*A ==(B*B+C*C))
    {

        printf("TRIANGULO RETANGULO\n");
    }
      if (A*A >(B*B+C*C))
    {
        printf("TRIANGULO OBTUSANGULO\n");

    }
     if (A*A <(B*B+C*C))
    {
        printf("TRIANGULO ACUTANGULO\n");
    }
      if((A==B)&&(B==C)&&(C==A))
    {

        printf("TRIANGULO EQUILATERO\n");
    }
      if((A==B && B!=C)||(B==C&& C!=A)||(A==C&& A!=B))
    {
        printf("TRIANGULO ISOSCELES");

    }

 return 0;

}
