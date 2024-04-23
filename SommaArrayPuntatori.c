#include<stdio.h>
int main(){
    float array[]={2.5,3.7,1.2,5.9,4.3};
    float * puntatore=array;
    float somma=0;
    for(int i=0;i<5;i++){
        somma+=*(puntatore+i);
    }
    printf("la somma degli elementi dell'array e': %.1f", somma);
    return 0;
}
