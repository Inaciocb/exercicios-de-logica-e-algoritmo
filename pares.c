/*Crie um algoritmo que servirá para imprimir uma quantidade de números pares para serem
impressos (a entrada mínima é 2). Exemplo de saída para a entrada 4: 2 4 6 8.*/

#include <stdio.h>

int main() {
    
    int numero, i=0;
    
    printf("Digite um número: ");
    scanf("%d", &numero);
    
    for(;i<=(2*numero);i=i+2)
    {
        if(i%2==0 && i!=0)
        {
            printf("%d\t", i);
        }
    }
    
    
    return 0;
}

/*

int numero;
leia(numero);
para(i de 0 até (2*numero), passo 2)
{
   se(i mod 2 == 0 && i!= 0)
   {
        imprima(i"\t");
   }     
}

*/
