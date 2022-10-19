/*
3) Entrar com 10 números e imprimir a metade de cada número.
*/


#include <stdio.h>
#include <math.h>

int main()
{   
    int i=0, n[15];
    
    for(i=0; i<15; i++)
    {  
        printf("Digite o número: ");
        scanf ("%d", &n[i]);
    }
    for(i=14; i>=0; i--)
    {
        printf("A raiz quadrada de %d é %.2f\n", n[i], sqrt(n[i]));
    }
    return 0;
}

/*
    int i=0, n[15];
    para(i=0 até i<15; i++)
    {
        imprima("Digite o número: ");
        leia(n[i]);
    }
    para(i=14 até i>=0; i--)
    {
        imprima("A raiz quadrada de" + n[i] +"é"+ rad(n[i]));
    }
*/
