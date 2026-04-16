//La calculadora funciona correctamente, con las delimitaciones de division entre 0, salida directa para opción 7, una cifra para raíz, distintas sintaxis para cada opción.
//La calculadora esta en proceso de modularización de las funciones, por ahora solo lleva suma y resta.

#include <math.h>
#include <stdio.h>

//Declaracion de variables globales

//Declaracion de funciones

double suma1(double n1, double n2)
{
    double res;
    res = n1+n2;
    return res;
}

void suma2(double n1, double n2)
{
    double res;
    res = n1+n2;
    printf("El resultado de la suma es %lf\n", res);
}

// res = suma1 (n1,n2);
//suma2(n1,n2)

double resta1(double n1, double n2)
{
    double res;
    res = n1-n2;
    return res;
}

void main()
{
  double n1,n2,res;
    int op=0;
      
      printf("Bienvenido a mi calculadora\n");
      printf("Escoge una opcion\n");
      printf("1)Suma\n");
      printf("2)Resta\n");
      printf("3)Multiplicacion\n");
      printf("4)Division\n");
      printf("5)Raíz Cuadrada\n");
      printf("6)Potencia\n");
      printf("7)Salida\n");
  
     do
     {
      printf("opcion: ");
      scanf("%d",&op);
     }
     while (op < 1 || op > 7 );
      
    if(op != 7)
    {
      
        if(op == 5)
        {
            printf("Dame la cifra de la raíz: ");
            scanf("%lf", &n1);
        }
        else
        {
          
            if(op == 4)
            {
              
                do //Preguntar por cifra 1 y 2
                {
                printf("Dame el dividendo: ");
                scanf("%lf", &n1);
                printf("Dame el divisor: ");
                scanf("%lf", &n2);
                }
                while (n2 == 0); //Siempre y cuando el denominador sea = 0
                
            }
            else
            {
              
                if(op == 6)
                {
                    printf("Dame la base: ");
                    scanf("%lf", &n1);
                    printf("Dame el exponente: ");
                    scanf("%lf", &n2);
                }
                else
                {
                    printf("Dame la primera cifra: ");
                    scanf("%lf", &n1);
                    printf("Dame la segunda cifra: ");
                    scanf("%lf", &n2);
                }
              
            }
            
        }
      
    }
      switch(op)
      {
            default:
              printf("Opcion no valida\n");
              break;
            case 1:
              res = suma1(n1, n2);
              printf("El resultado es %f\n", res);
              break;
            case 2:
              res = resta1(n1, n2);
              printf("El resultado es %f\n",res);
              break;
            case 3:
              res=n1*n2;
              printf("El resultado es %f\n",res);
              break;
            case 4:
              res=n1/n2;
              printf("El resultado es %f\n",res);
              break;
            case 5:
              res=sqrt(n1);
              printf("El resultado es %f\n",res);
              break;
            case 6:
              res=pow(n1, n2);
              printf("El resultado es %f\n",res);
              break;
            case 7:
              printf("El programa finalizó");
              
        }
        
}
