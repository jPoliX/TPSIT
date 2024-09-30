/*Progettare un algoritmo che risolva il seguente problema. Si richieda 
all’utente di inserire una serie di terne di dati numerici (A, B, C). 
Il programma deve terminare quando uno dei valori inseriti è minore di
zero. Si scartino le terne nelle quali i valori non sono in ordine
strettamente crescente, ovvero quelle terne per cui non valga A < B < C.
Su tutte le terne non scartate si calcoli il massimo e il minimo dei
valori inseriti. Si stampino a video tali valori massimi e minimi prima
di terminare il programma.*/

#include <stdio.h>

int main()
{
    int n1, n2, n3, max, min;
    do{
     printf("Inserisci il primo numero: \n");
        scanf("%d", &n1);
        printf("Inserisci il secondo numero: \n");
        scanf("%d", &n2);
        printf("Inserisci il terzo numero: \n");
        scanf("%d", &n3);
        if(n1<n2<n3){
            if(n1<n2 && n1<n3){
                min=n1;
            } else if(n2<n1 && n2<n3){
                min=n2;
            } else min=n3;
            
            if(n1>n2 && n1>n3){
                max = n1;
            } else if(n2>n1 && n2>n3){
                max = n2;
            }else max = n3;
        }else 
        printf("numeri non in ordine\n");
    }while(n1>=0 && n2>=0 && n3>=0);
    
    printf("valore minimo: %d\n",min);
    printf("valore massimo: %d\n",max);
    
    return 0;
}
