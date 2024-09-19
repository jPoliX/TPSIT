/*Progettare un algoritmo che effettui la lettura da tastiera di una serie
di coppie di valori numerici reali (sia positivi che negativi che zero).
Per ciascuna coppia, l’algoritmo deve calcolare e stampare il valore
della radice quadrata del rapporto tra il valore maggiore e quello
minore dei due. Il programma termina quando vengono inseriti dei valori
che non permettono di svolgere il calcolo nel dominio dei numeri reali.
Prima di terminare si richiede di stampare un messaggio che indichi la
ragione per cui non è stato possibile svolgere il calcolo.*/

#include <stdio.h>
#include <math.h>
int main()
{
  int n1,n2;
  float risultato=0, radice=0;
  do{
      printf("Inserisci il primo numero reale: ");
      scanf("%d", &n1);
      printf("Inserisci il secondo numero reale: ");
      scanf("%d", &n2);
      
      if(n1>n2){
          risultato=n1/n2;
          radice=sqrt(risultato);
          printf("La radice del rapporto è: %.2f\n", radice);
      }else 
      risultato=n2/n1;
          radice=sqrt(risultato);
          printf("La radice del rapporto è: %.2f\n", radice);
          
  }while(risultato>0);
  
  printf("Calcolo non possibile");
  
    return 0;
}
