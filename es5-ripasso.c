/*Progettare un algoritmo che effettui le seguenti operazioni:

• continui a leggere da tastiera una serie di terne di valori interi A ,
B e C finchè non vengono inseriti dei valori tali per cui A + B < C
• conteggi il numero di volte in cui la differenza tra A e B è pari, dispari, e quando è nulla
• prima di terminare, visualizzi il valore dei valori conteggiati*/

#include <stdio.h>

int main()
{
    int n1, n2, n3;
    int differenza = 0;
    int contP = 0, contD = 0, contN = 0;
    do
    {
        printf("Inserisci il primo numero: \n");
        scanf("%d", &n1);
        printf("Inserisci il secondo numero: \n");
        scanf("%d", &n2);
        printf("Inserisci il terzo numero: \n");
        scanf("%d", &n3);
        differenza = n1 - n2;
        if (differenza % 2 == 0)
        {
            contP++;
        }
        else
            contD++;
        if (differenza == 0)
        {
            contN++;
        }
    } while (n1 + n2 >= n3);

    printf("Numero di volte in cui la differenza è pari: %d\n", contP);
    printf("Numero di volte in cui la differenza è dispari: %d\n", contD);
    printf("Numero di volte in cui la differenza è nulla: %d", contN);
    return 0;
}
