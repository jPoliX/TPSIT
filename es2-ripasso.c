/*Progettare un algoritmo che effettui le seguenti operazioni:
• continui a leggere da tastiera due valori numerici, fermandosi quando uno dei due numeri è
0 (zero)
• per ogni coppia di numeri letti:
◦ calcoli il prodotto dei due numeri e ne stampi il valore
◦ sommi il prodotto calcolato ad una variabile che memorizzi la somma di tutti i prodotti
• all’uscita del ciclo, stampi il valore della somma*/

#include <stdio.h>

int main()
{
    int n1, n2;
    int prodotto = 0, somma = 0;
    do
    {
        printf("Inserisci primo numero: ");
        scanf("%d", &n1);
        printf("Inserisci secondo numero: ");
        scanf("%d", &n2);
        prodotto = n1 * n2;
        somma += prodotto;
        printf("Il prodotto è: %d\n", prodotto);
    } while (n1 != 0 && n2 != 0);
    printf("La somma dei prodotti è: %d", somma);
    return 0;
}
