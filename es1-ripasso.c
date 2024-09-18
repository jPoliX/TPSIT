/*Esercizio 1
Progettare un algoritmo che effettui la lettura da tastiera di una serie di coppie di valori numerici.
L’algoritmo deve calcolare e stampare il rapporto tra il valore minore e quello maggiore dei due. Il
programma termina quando uno dei due valori o entrambi sono uguali a zero.*/

#include <stdio.h>

int main()
{
    int n1, n2;
    float risultato = 0;
    do
    {
        printf("Inserisci primo numero: ");
        scanf("%d", &n1);
        printf("Inserisci secondo numero: ");
        scanf("%d", &n2);
        if (n1 != 0 && n2 != 0)
        {
            if (n1 < n2)
            {
                risultato = (float)n1 / n2;
            }
            else
                risultato = (float)n2 / n1;

            printf("Il rapporto tra i due numeri è: %.2f\n", risultato);
        }
    } while (n1 != 0 && n2 != 0);
    return 0;
}
