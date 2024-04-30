#include <stdio.h>

int main()
{
   int quantiNumeri=0, n=0,max=0,min=0;
   float media=0,somma=0;
printf("inserisci la dimensione del vettore\n");
scanf("%d",&quantiNumeri);

float vettore[quantiNumeri];
   float*puntatore=vettore;
printf("inserisci i numeri per il vettore\n");

for(int i=0;i<quantiNumeri;i++){ 
scanf("%f",puntatore+i);
}

 min = max = *puntatore;
for(int i=0;i<quantiNumeri;i++){
    somma+=*(puntatore+i);
    if (*(puntatore + i) < min){
            min = *(puntatore + i);
}
        if (*(puntatore + i) > max){
            max = *(puntatore + i);
  }
}
    media=(float)somma/quantiNumeri;
    
printf("la media è: %f\n",media);
printf("il minimo è: %d\n",min);
printf("il massimo è: %d\n",max);

    return 0;
    //for(int *puntatore=vettore;puntatore<vettore+quantiNumeri;puntatore++);
    //somma+=*puntatore;
}
