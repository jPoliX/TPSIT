/*Progettare un algoritmo che risolve il seguente problema. Si desidera
calcolare la somma delle radici quadrate di N valori numerici inseriti
dall’utente, con N inserito in input.
L’algoritmo deve stampare la somma calcolata. L’algoritmo deve terminare
con un messaggio di errore quando viene inserito un numero che non
permette di effettuare il calcolo (nel dominio dei numeri reali).*/

#include <stdio.h>
#include <math.h>

int main()
{
    int N, numero;
    float somma = 0, radice = 0;
    printf("Inserisci quanti numeri deve calcolare: ");
    scanf("%d", &N);
    while (N > 0)
    {
        printf("Inserisci un numero: ");
        scanf("%d", &numero);
        radice = sqrt(numero);
        if (numero >= 0)
        {
            somma += radice;
            N--;
        }
        else
            printf("radice impossibile \n");
    }

    printf("somma radici quadrate: %.2f", somma);

    return 0;
}
