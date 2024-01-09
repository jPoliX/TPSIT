#include <stdio.h>

int main() {
    int n,prezzo;
    int scelta=0;
    
    while(scelta = 1){
    printf("Inserisci un numero");
    scanf("%d", &n);
    while(n<=0){
        printf("Inserisci un altro numero");
    }
    if(n<=500){
        prezzo = n * 0.10;
        printf("il totale è: %d",prezzo);
    }
    else if(n>500 && n<1001){
        prezzo = n * 0.20;
        printf("il totale è: %d",prezzo);
    }
    else{
        prezzo = n * 0.30;
        printf("il totale è: %d",prezzo);
    }
    printf("Inserire 0 per controllare di nuovo lo sconto o qualsiasi altro valore per chiudere.");
    scanf("%d", &scelta);
    return 0;
}
}
