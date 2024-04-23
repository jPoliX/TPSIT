#include<stdio.h>
int main(){
    int lunghezza,vettore[100];

    //leggi lunghezza vettore
    printf("inserisci la lunghezza del vettore: ");
    scanf("%d",&lunghezza);

    int *p=vettore; //inizializza il puntatore al primo elemento del vettore

    //leggi gli elementi del vettore
    printf("inserisci gli elementi del vettore: \n");
    for(int i=0;i<lunghezza;i++){
        scanf("%d",p);
        p++;
    }
    printf("gli elementi dell'array: \n");
    for(int i=0;i<lunghezza;i++){
        printf("%d",vettore[i]);
    }

    return 0;
}
