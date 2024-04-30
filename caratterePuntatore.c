#include <stdio.h>

int main() {
    char* puntatore;
    char stringa[100];
    char carattere;
    int lung,contatore=0;
    puntatore = stringa;
    printf("inserisci una stringa: ");
    scanf("%s",puntatore);
    printf("inserisci un carattere: ");
    scanf(" %c",&carattere);
    for(int i=0;i<100;i++){
        if(*(puntatore+i)==carattere){
            contatore++;
        }
    }
    printf("il carattere si ripete: %d volte",contatore);
    return 0;
}
