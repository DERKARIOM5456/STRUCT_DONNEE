#include <stdio.h>
#include <stdlib.h>
#include "dliste.h"
dliste DListeVide()
{ 
    dliste l=NULL;
    return l;
}
int EstDListeVide(dliste ll)
{
    return (ll == NULL);
}
/*int EstDListeTrier()
{

}*/
void SommetDListe(dliste ll,int* donnee)
{
    if(EstDListeVide(ll))
        printf("\nLa liste est vide");
    else
        *donnee = ll->donnee;
}
int NbreElmDListe(dliste ll)
{
    if(ll==NULL)
        return 0;
    int i=0;
    dliste ptr;
    for(ptr=ll;ptr!=NULL;ptr=ptr->next)
        i++;
    return i;
}
dliste InsereEnTeteDL(dliste ll,int donnee)
{
    dliste elm = (dliste)malloc(sizeof(dliste));
    elm->donnee = donnee;
    elm->back = NULL;
    if(ll==NULL)
    {
        elm->next = NULL;
        ll = elm;
    }
    else
    {
        ll->back = elm;
        elm->next = ll;
        ll = elm;
    }
    return ll;
}
dliste InsereEnQueueDL(dliste ll,int donnee)
{
    dliste elm = (dliste)malloc(sizeof(dliste));
    elm->donnee = donnee;
    elm->next = NULL;
    if(ll==NULL)
    {
        return InsereEnTeteDL(ll,donnee);
    }
    else
    {
        dliste ptr = ll;
        while(ptr->next!=NULL)
            ptr = ptr->next;
        elm->back = ptr;
        ptr->next = elm;
        return ll;
    } 
}
dliste InsereEnPositionDL(dliste ll ,int donnee,int pos)
{
    if(pos==1)
        return InsereEnTeteDL(ll,donnee);
    else
    {
        if(pos>NbreElmDListe(ll))
            return InsereEnQueueDL(ll,donnee);
        else
        {
            dliste elm = malloc(sizeof(dliste));
            elm->donnee = donnee;
            dliste ptr = ll,s;
            for(int i=1;i<pos;i++)
            {
                s = ptr;
                ptr = ptr->next;
            }
            elm->next = ptr;
            elm->back = s;
            s->next = elm;
            ptr->back = elm;
            return ll;
        }
    }
}
dliste SuppEnTeteDL(dliste ll)
{
    if(EstDListeVide(ll))
        printf("\nListe vide");
    else
    {
        dliste ptr = ll;
        ll = ll->next;
        ll->back = NULL;
        free(ptr);
    }
    return ll;
}
dliste SuppEnQueuDL(dliste ll)
{
    if(EstDListeVide(ll))
        printf("\nListe vide");
    else
    {
        dliste ptr = ll,s;
        while(ptr->next!=NULL)
            ptr = ptr->next;
        s = ptr;
        ptr = ptr->back;
        ptr->next = NULL;
        free(s);
    }
    return ll;
}
dliste SuppEnPositionDL(dliste ll,int pos)
{
    if(pos==1)
        return SuppEnTeteDL(ll);
    else
    {
        if(pos==NbreElmDListe(ll))
            return SuppEnQueuDL(ll);
        else
        {
            dliste ptr = ll,s,tmp;
            for(int i=1;i<pos;i++)
            {
                s = ptr;
                ptr = ptr->next;
            }
            tmp = ptr;
            s->next = ptr->next;
            ptr = ptr->next;
            ptr->back = s;
            free(tmp);
            return ll;
        }
    }
}
void AffichageDL(dliste ll)
{
    dliste ptr = ll;
    if(EstDListeVide(ll))
        printf("\nListe Vide");
    printf("\n");
    while (ptr!=NULL)
    {
        printf("[%d]\t",ptr->donnee);
        ptr = ptr->next;
    }
}
void RechercheDL(dliste ll,int donnee)
{
    dliste ptr = ll;
    int i = 0;
    if(EstDListeVide(ll))
        printf("\nListe vide");
    while(ptr!=NULL && ptr->donnee!=donnee)
    {
        ptr = ptr->next;
        i++;
    }
    if(ptr==NULL)
        printf("\nL'element n'existe pas");
    else
        printf("\nL'element %d se trouve a la position %d",donnee,i+1);
}
dliste ConcatDlistePlus(dliste ll,dliste ll1)
{
    if(EstDListeVide(ll))
        ll = ll1;
    else
    {
        dliste ptr = ll;
        while(ptr->next!=NULL)
            ptr = ptr->next;
        ll1->back = ptr;
        ptr->next = ll1;
        ll1=ll;
    }
    return ll1;
}
dliste ConvertListeInDListe(TypeCellule* l)
{
    dliste ll = DListeVide();
    TypeCellule* p = l;
    while(p!=NULL)
    {
        ll = InsereEnQueueDL(ll,p->donnee);
        p = p->suivant;
    }
    return ll;
}
/*dliste ClearDListe(dliste ll)
{
    dliste ptr;
    while(ll!=NULL)
    {
        ptr = ll;
        ll = ll->next;
        free(ptr);
    }
    return ll;
}*/
