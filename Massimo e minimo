// dopo aver inserito N numeri interi con N scelto dall'utente
// determinare il numero massimo e minimo inseriti

#include <stdio.h>
int main()
{
    int i = 0, n, num, max = -999999, min = 999999;
    do
    {
        printf("quanti numeri vuoi inserire?\n");
        scanf("%d", &n);
    } while (n <= 0);
    while (n > 0)
    {
        printf("inserisci il %d numero\n", i + 1);
        scanf("%d", &num);
        if (min > num)
        {
            min = num;
        }
        if (max < num)
        {
            max = num;
        }
        n--;
        i++;
    }
    printf("il numero massimo e': %d\n", max);
    printf("il numero minimo e': %d\n", min);
    return 0;
}
