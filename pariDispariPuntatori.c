#include <stdio.h>

int main()
{
   int quantiNumeri=0, n=0,contaPari=0,contaDispari=0;
   float media=0,somma=0;
printf("inserisci la dimensione del vettore\n");
scanf("%d",&quantiNumeri);

int vettore[quantiNumeri];
int vetPari[quantiNumeri],vetDispari[quantiNumeri];
   int*puntatore=vettore;
printf("inserisci i numeri per il vettore\n");

for(int i=0;i<quantiNumeri;i++){ 
scanf("%d",puntatore+i);
}
for(int i=0;i<quantiNumeri;i++){
    if(*(puntatore+i)%2==0){
        vetPari[contaPari++]=*(puntatore+i);
    }else {
        vetDispari[contaDispari++]=*(puntatore+i);
        somma+=vetDispari[i];
    }
}
media=(float)somma/quantiNumeri;

printf("i numeri pari sono: ");
for(int i=0;i<contaPari;i++){
    printf(" %d ",vetPari[i]);
}
  
printf("i numeri dispari sono: ");
for(int i=0;i<contaDispari;i++){
    printf(" %d ",vetDispari[i]);
}
printf("\n");
printf("la media è: %f",media);
return 0;
}
