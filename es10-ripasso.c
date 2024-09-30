/*Una birreria a fine serata deve conteggiare l’incasso. La cassiera accende il software gestionale il quale le chiede di inserire una alla volta le consumazioni servite.
Le consumazioni si dividono in bevande e ristorazione. La cassiera per ogni consumazione deve inserire la tipologia di consumazione e il suo importo.

Quando la cassiera inserisce la stringa “esci” il software deve mostrare a video le seguenti informazioni:
1.	La media dell’incasso delle bevande
2.	La media dell’incasso della ristorazione
3.	Deve indicare se sono state vendute più bevande o più ristorazioni*/

#include <stdio.h>
#include <string.h>
int main()
{
    int contaBevande = 0, contaRistorazione = 0, scelta;
    char tipo[10];
    float mediaBevande, mediaRistorazione, sommaBevande, sommaRistorazione, importo = 0;

    do
    {
        printf("Inserisci tipologia (bevande/ristorazione) o 'esci' per terminare: \n");
        scanf("%s", tipo);

        if (strcmp(tipo, "esci") != 0)
        {
            printf("Inserisci l'importo: \n");
            scanf("%f", &importo);

            if (strcmp(tipo, "bevande") == 0)
            {
                contaBevande++;
                sommaBevande += importo;
            }
            else if (strcmp(tipo, "ristorazione") == 0)
            {
                contaRistorazione++;
                sommaRistorazione += importo;
            }
            else
            {
                printf("Tipologia non valida. Usa 'bevande' o 'ristorazione'.\n");
            }
        }
    } while (strcmp(tipo, "esci") != 0);
    if (contaBevande > 0)
    {
        mediaBevande = sommaBevande / contaBevande;
    }
    if (contaRistorazione > 0)
    {
        mediaRistorazione = sommaRistorazione / contaRistorazione;
    }

    if (contaBevande > contaRistorazione)
    {
        printf("sono state vendute più bevande\n");
    }
    else if (contaRistorazione > contaBevande)
    {
        printf("sono state vendute più ristorazioni\n");
    }
    else if (contaRistorazione == contaBevande)
    {
        printf("sono state vendute la stessa quantità di bevande e ristorazioni\n");
    }
    printf("media bevande: %.2f\n", mediaBevande);
    printf("media ristorazione: %.2f\n", mediaRistorazione);
    return 0;
}
