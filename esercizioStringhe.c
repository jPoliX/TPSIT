
#include <stdio.h>
#include <string.h>

int main()
{
    int voc = 0, voc2 = 0, lung = 0, lung2 = 0, cons = 0, cons2 = 0, contatore = 0;
    char str[20];
    char stringa[20];
    char str1[20];
    char str2[20];
    char carattere;

    printf("inserisci una stringa: \n");
    scanf("%s", str);
    printf("inserisci una seconda stringa: \n");
    scanf("%s", stringa);

    lung = strlen(str);
    lung2 = strlen(stringa);
    for (int i = 0; i <= lung; i++)
    {
        str1[i] = str[i];
    }
    for (int i = 0; i <= lung; i++)
    {
        str2[i] = str[i];
    }

    for (int i = 0; i < lung; i++)
    {
        if (str[i] == 'a' || str[i] == 'e' || str[i] == 'i' || str[i] == 'o' || str[i] == 'u')
        {
            voc++;
        }
        else
        {
            cons++;
        }
    }
    printf("inserisci una lettera: \n");
    scanf(" %c", &carattere);

    for (int i = 0; i < lung; i++)
    {
        if (str[i] == carattere)
        {
            contatore++;
        }
    }

    printf("le vocali presenti nella stringa sono: %d\n", voc);

    printf("le consonanti presenti nella stringa sono: %d\n", cons);

    printf("la lettera è presente: %d volte\n", contatore);

    printf("Le lettere in posizione pari sono: ");
    for (int i = 1; i < lung; i += 2)
    {
        printf("%c ", str1[i]);
    }
    printf("\n");

    printf("Le lettere in posizione dispari sono: ");
    for (int i = 0; i < lung; i += 2)
    {
        printf("%c ", str2[i]);
    }
    printf("\n");

    if (lung > lung2)
    {
        printf("La prima stringa è più lunga");
    }
    else
        printf("La seconda stringa è più lunga");
    printf("\n");

    for (int i = 0; i < lung || i < lung2; i++)
    {
        if (str[i] == 'a' || str[i] == 'e' || str[i] == 'i' || str[i] == 'o' || str[i] == 'u')
        {
            voc++;
        }
        else
            cons++;
        if (stringa[i] == 'a' || stringa[i] == 'e' || stringa[i] == 'i' || stringa[i] == 'o' || stringa[i] == 'u')
        {
            voc2++;
        }
        else
            cons2++;
    }
    if (voc > voc2)
    {
        printf("la prima stringa contiene più vocali");
    }
    else if (voc2 > voc)
    {
        printf("La seconda stringa contiene più vocali");
    }
    else
        printf("le due stringhe contengono le stesse vocali");
    printf("\n");

    if (cons > cons2)
    {
        printf("la prima stringa contiene più consonanti");
    }
    else if (cons2 > cons)
    {
        printf("La seconda stringa contiene più consonanti");
    }
    else
        printf("le due stringhe contengono le stesse consonanti");
    return 0;
}
