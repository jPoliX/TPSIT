#include <stdio.h>

int main()
{
	int soldi=0, voltePastina=0, voltePanino=0, scelta, giorni;
	printf("inserisci quanti soldi hai: ");
	scanf("%d",&soldi);
	while(soldi>0){
    	printf("cosa prendi oggi da mangiare? \n");
    	printf("1 per la pastina\n");
    	printf("2 per il panino\n");
    	scanf("%d",&scelta);
    	if(scelta==1){
        	printf("hai scelto la pastina\n");
        	giorni++;
        	voltePastina++;
        	soldi=soldi-1;
        	}else{
            	if(scelta==2){
            	printf("hai scelto il panino\n");
            	giorni++;
            	voltePanino++;
            	soldi=soldi-1,5;
        	}
        	}
	}
        	printf("Mario ha ordinato per %d\n",giorni);
         	printf("Mario ha mangiato la pastina per %d\n",voltePastina);
	        printf("Mario ha mangiato il panino per %d\n",voltePanino);
    
	return 0;
	}
