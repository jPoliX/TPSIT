//scrivere un programma che conti quante vocali contiene una stringa

#include <stdio.h>
#include<string.h>

int main()
{
int voc=0,lung=0;
char str[20];
printf("inserisci una stringa: \n");
scanf("%s",str);
lung=strlen(str);
for(int i=0;i<lung;i++){
    if(str[i]=='a'|| str[i]=='e'||str[i]=='i'||str[i]=='o'||str[i]=='u')
        voc++;   
}
printf("le vocali presenti nella stringa sono: %d\n",voc);


    return 0;
}
