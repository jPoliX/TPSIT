
#include <stdio.h>

int main()
{
int somma=0, vettore[10],i,n,sommaPari=0,sommaDispari=0,min=0,max=0,minDispari=0,maxDispari=0;
float media=0,mediaPari=0,contatore=0,mediaDispari=0,contatore2=0;
    do{
        printf("quanti elementi vuoi inserire?\n");
    scanf("%d",&n);
    }while(n<=0 || n>10);
    printf("inserisci gli elementi: \n");
   
    for(i=0;i<n;i++){
        scanf("%d",&vettore[i]);
        somma=somma+vettore[i];
        media=somma/n;
    }
        for(int i=0;i<n;i++){
            if(vettore[i]%2==0){
                sommaPari=sommaPari+vettore[i];
                contatore++;
            }
            if (contatore == 1) {
                min = max = vettore[i];
            } else {
                if (vettore[i] < min) {
                    min = vettore[i];
                }
                if (vettore[i] > max) {
                    max = vettore[i];
                }
            }
        }
        
        if(contatore>0){
     mediaPari=sommaPari/contatore;
        }
        for(int i=0;i<n;i++){
            if(vettore[i]%2==1){
                sommaDispari=sommaDispari+vettore[i];
                contatore2++;
            }
            if(contatore2==1){
                minDispari=maxDispari=vettore[i];
            }else{
                if(vettore[i]<minDispari){
                    minDispari=vettore[i];
                }
                if(vettore[i]>maxDispari){
                    maxDispari=vettore[i];
                }
            }
        }
        if(contatore2>0){
            mediaDispari=sommaDispari/contatore2;
        }
        printf("la media è: %f\n",media);
        printf("la media dei pari è: %f\n",mediaPari);
        printf("la media dei dispari è: %f\n",mediaDispari);
        printf("il minimo dei numeri pari inseriti è: %d\n",min);
        printf("il massimo dei numeri pari inseriti è: %d\n",max);
         printf("il minimo dei numeri dispari inseriti è: %d\n",minDispari);
          printf("il massimo dei numeri dispari inseriti è: %d\n",maxDispari);
    return 0;
}

