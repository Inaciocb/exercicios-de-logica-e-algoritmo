#include <stdio.h>
#include <string.h>

int main()
{
    char estado[2];
    printf("Digite a sigla do seu estado: ");
    gets(estado);
    if(strcmp(estado, "rs") ==0 || strcmp(estado,"RS") ==0|| strcmp(estado,"Rs")==0)
    {
        printf("Gaúcho\n");
    }else if(strcmp(estado,"SP")==0 || strcmp(estado,"sp")== 0|| strcmp(estado,"Sp")==0)
    {
        printf("Paulista\n");
    }else if(strcmp(estado,"RJ")==0|| strcmp(estado,"rj")==0|| strcmp(estado,"Rj")==0)
    {
        printf("Carioca\n");
    }
    return 0;
}
