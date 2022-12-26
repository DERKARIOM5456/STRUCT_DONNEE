#include <stdio.h>
#include <stdlib.h>
#include "Pile.h"
Pile* PileVide()
{
    Pile *p;
    p=NULL;
    return p;
}
int EstPileVide(Pile* p)
{
    return (p == NULL);
}
int Sommet(Pile* p)
{
    int s;
    if (EstPileVide(p))
        fprintf(stderr , "La pile est vide\n");
    else
        s = p->donnee;
    return s;
}
Pile* Empiler(Pile* p,int donne)
{
    Pile* cell = (Pile*)malloc(sizeof(Pile));
    cell->donnee = donne;
    cell->suivant = p;
    return cell;
}
Pile* Depiler(Pile* p)
{
    Pile* ptr;
    if (EstPileVide(p))
        fprintf(stderr,"La pile est vide\n");
    else
    {
        ptr = p;
        p = p->suivant;
        free (ptr);
    }
    return p;
}
Pile* Nettoyer(Pile* p)
{
    if(EstPileVide(p))
        return PileVide();
    else
        Nettoyer(Depiler(p));
}
void Afficher(Pile* p)
{
    Pile *ptr;
    ptr=p;
    while (ptr != NULL)
    {
        printf("[%d]\n",ptr->donnee);
        ptr = ptr->suivant;
    }
}