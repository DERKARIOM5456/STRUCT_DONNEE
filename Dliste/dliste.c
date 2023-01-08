#include <stdio.h>
#include <stdlib.h>
#include "dliste.h"
dliste DListeVide()
{
    dliste ll = malloc(sizeof(dliste));
    ll = NULL;
    ll->back = NULL;
    ll->next = NULL;
    return ll;
}
int EstDListeVide(dliste ll)
{
    return (ll->back == NULL);
}
int EstDListeTrier()
{

}
void SommetDListe(dliste ll,int donnee)
{
    if(estLis)
}