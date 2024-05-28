#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    int dimensione=0;
    int somma=0,somma2=0;
    float media=0,media2=0;
    printf("Inserisci la dimensione: ");
    scanf("%d",&dimensione);
    int arr[dimensione]; 
    
    srand(time(NULL)); // genera numeri diversi ogni esecuzione in base all'orario
  
    for (int i = 0; i < dimensione; i++) {
        arr[i] = rand() % 10; //genera numeri random da 1 a 10
    }
      for(int i=0;i<dimensione;i++){ // calcolo somma array con duplicati
        somma+=arr[i];
    }
    
    for(int i = 0; i < dimensione; i++) { // riordino l'array usando il selection sort
      int min = i;
      for (int j = i + 1; j < dimensione; j++) {
         if (arr[j] < arr[min])
            min = j;
      }
      int t = arr[min];
      arr[min] = arr[i];
      arr[i] = t;
    }
  
    int indice = 0;
    int arr2[dimensione]; // creo l'array eliminando i duplicati
    arr2[indice++] = arr[0]; // metto il primo elemento dell'array con duplicati al array senza duplicati
    for (int i = 1; i < dimensione; i++) {
        if (arr[i] != arr[i - 1]) { //se l'elemento in posizione i è diverso da quello nella posizione precendente lo aggiungo nel nuovo array
            arr2[indice++] = arr[i];
        }
    }
    
      for(int i=0;i<indice;i++){ // calcolo somma array senza duplicati
        somma2+=arr2[i]; 
    }
   
    media=(float)somma/dimensione; //trovo le medie dei 2 array
    media2=(float)somma2/indice;
    
    for (int i = 0; i < dimensione; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

   
    printf("\n");
    printf("Media duplicati: %.2f\n",media);
    printf("Media unici: %.2f",media2);
    printf("\n");
    
   if (media > media2) { // confronto le due medie
        printf("La media con i duplicati è maggiore\n");
    } else if(media==media2){
        printf("La due medie hanno lo stesso valore\n");
    }else 
    printf("La media senza duplicati è maggiore")
 
    return 0;
}
