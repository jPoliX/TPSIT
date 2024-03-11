#include <stdio.h>
int main()
{
    int n=0,quantiNumeri=5,quantiNumeri2=5,num=0;
int vettore[5];
int vettore2[5];
int vettoreSomma[10];
printf("inserisci i numeri per il primo vettore: \n");
while (quantiNumeri>0)
{
   
    scanf("%d",&n);
    quantiNumeri--;
    for(int i=0;i<5;i++){
        vettore[i]=n;
        
    }
}
printf("inserisci i numeri per il secondo vettore: \n");
while(quantiNumeri2>0){
    
    scanf("%d",&num);
    quantiNumeri2--;
    for(int i=0;i<5;i++){
        vettore2[i]=num;
    }
}
for(int i=0;i<5;i++){
        vettoreSomma[i]=vettore2[i]+vettore[i];
}
 
   printf("La somma è: ");
    for (int i = 0; i < 5; i++) {
        printf("%d ", vettoreSomma[i]);
    }
return 0;
}
