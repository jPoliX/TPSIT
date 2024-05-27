
#include <stdio.h>

int main()
{
   int x=0,dimensione=0,n=0;
   printf("inserisci la dimensione: ");
   scanf("%d",&dimensione);
   
   int array[dimensione];
   
 
   for(int i=0;i<dimensione;i++){
       printf("inserisci un numero: ");
       scanf("%d",&n);
       array[i]=n;
   }
   printf("inserisci la quantità di numeri che vuoi visualizzare: ");
   scanf("%d",&x);
   
    for(int i = 0; i < dimensione; i++) {
      int min = i;
      for (int j = i + 1; j < dimensione; j++) {
         if (array[j] < array[min])
            min = j;
      }
      int t = array[min];
      array[min] = array[i];
      array[i] = t;
    }

   for(int i = 0; i < x; i++) {
      printf("%d ", array[i]);      
   }   


    return 0;
}
