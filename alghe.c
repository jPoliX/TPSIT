#include <stdio.h>

int main() {
    double pIniziale, pFinale, divisione;
    int anni=0;
    printf("Inserisci la popolazione iniziale: ");
    scanf("%d", &pIniziale);
    printf("Inserisci la popolazione da raggiungere: ");
    scanf("%d", &pFinale);
    while (pIniziale < pFinale) {
        pIniziale *= 2;
        anni++;
        divisione=pIniziale/3;  
        pIniziale=pIniziale-divisione;
		anni++;
    }
    printf("La popolazione impiega %d anni per raggiungere o superare %d.\n", anni, pFinale);
    return 0;
}
