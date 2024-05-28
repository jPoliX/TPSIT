
#include <stdio.h>
#include <stdlib.h>

int main() {
    int dimensione=0;
    int somma=0,somma2=0;
    float media=0,media2=0;
    printf("Inserisci la dimensione: ");
    scanf("%d",&dimensione);
    int arr[dimensione]; 
  
    for (int i = 0; i < dimensione; i++) {
        arr[i] = rand() % 10;
    }
      for(int i=0;i<dimensione;i++){
        somma+=arr[i];
    }
    
    for(int i = 0; i < dimensione; i++) {
      int min = i;
      for (int j = i + 1; j < dimensione; j++) {
         if (arr[j] < arr[min])
            min = j;
      }
      int t = arr[min];
      arr[min] = arr[i];
      arr[i] = t;
    }
    
    int arr2[dimensione];
    int indice=0;
    for(int i=1;i<dimensione;i++){
        if(arr[i]!=arr[i-1]){
            arr2[indice++]=arr[i];
        }
    }
      for(int i=0;i<indice;i++){
        somma2+=arr2[i];
    }
   
    media=(float)somma/dimensione;
    media2=(float)somma2/indice;
    
    for (int i = 0; i < dimensione; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    for(int i=0;i<dimensione;i++){
        printf("%d",arr2[i]);
    }
    printf("\n");
    printf("Media duplicati: %.2f\n",media);
    printf("Media unici: %.2f",media2);
    printf("\n");
    
    if(somma>somma2){
        printf("La media con i duplicati è maggiore");
    }else printf("La media senza duplicati è maggiore");
 
    return 0;
}
