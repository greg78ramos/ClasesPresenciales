#include <stdio.h>

int main()
{
    int pr = 0;
    int np = 0;
    
    printf("Este programa calcula el precio total de platillos que ofrece una empresa de comida\n");
    printf("Ingrese el número de personas: ");
    scanf("%d",&np);
    
    if (np > 200)
    {
        if (np <= 300)
            pr = np * 85;
        else
            pr = np * 75;
    }
    else
    {
        pr = np * 95;
    }
        
    printf("El costo total es: %d", pr);

    return 0;
}
