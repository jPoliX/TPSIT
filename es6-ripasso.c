/*Progettare un algoritmo che effettui le seguenti operazioni:
• legga da tastiera una coppia di valori interi A e B con A<B;
• continui a leggere da tastiera una serie di valori interi, terminando
quando il valore letto è al di fuori dell’intervallo [A, B];
• conteggi la media dei valori letti;
• prima di terminare, stampi il valore calcolato.*/

#include <stdio.h>

int main()
{
    int n1, n2, n, cont = 0, somma = 0;
    float media = 0;
    do
    {
        printf("Inserisci il primo numero: \n");
        scanf("%d", &n1);
        printf("Inserisci il secondo numero: \n");
        scanf("%d", &n2);
    } while (n1 > n2);

    do
    {
        printf("Inserisci un numero: \n");
        scanf("%d", &n);
        somma += n;
        cont++;
    } while (n >= n1 && n <= n2);

    media = (float)somma / cont;
    printf("la media è: %.2f\n", media);
    return 0;
}
