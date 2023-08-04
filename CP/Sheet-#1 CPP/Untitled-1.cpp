#include<stdio.h>
int main()
{
    double A,B,C,X,Y,Z,I,J;
    scanf("%lf%lf%lf",&A,&B,&C);
    X=((1/2)*(A*C));
    Y=(3.14159*(C*C));
    Z=((1/2)*(A+B)*C);
    I=(B*B);
    J=(A*B);

   printf ("TRIANGULO: %.3lf\n",X);
   printf("CIRCULO: %.3lf\n ",Y);
   printf("TRAPEZIO: %.3lf\n",Z);
   printf("QUADRADO: %.3lf\n",I);
   printf("RETANGULO: %.3if\n",J);

   return 0;

}