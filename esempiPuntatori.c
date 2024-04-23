/*#include <stdio.h>
int main()
{
    int numero = 10;
    int *puntatore = &numero;
    printf("valore della variabile: %d", *puntatore);
    return 0;
}
#include <stdio.h>
int main()
{
    int numero = 5;
    int *puntatore = &numero;
    (*puntatore)++;
    printf("valore della variabile incrementata: %d\n", numero);
    return 0;
}
#include <stdio.h>
int main()
{
    int numero = 8;
    int *puntatore = &numero;
   *puntatore=*puntatore*2;
    printf("Valore della variabile raddoppiata: %d\n", numero);
    return 0;
}*/
#include <stdio.h>
int main()
{
    int numero = 10;
    int *puntatore = &numero;

    printf("inserisci un nuovo valore: \n");
    scanf("%d",&numero); //indica l'indirizzo della variabile numero
    printf("il nuovo valore e': %d\n", numero);
    return 0;
}
