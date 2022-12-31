#include <stdio.h>
#include <stdlib.h>
#include "Liste.h"
TypeCellule* ListeVide()
{
    TypeCellule* l;
    l = NULL;
    return l;
}
int EstListeVide(TypeCellule* l)
{
    return (l == NULL);
}
TypeCellule* InsereEnTete(TypeCellule* ancienL,int donnee)
{
    TypeCellule *nouveauL;
    nouveauL = (TypeCellule*)malloc(sizeof(TypeCellule));
    nouveauL->donnee = donnee;
    nouveauL->suivant = ancienL;
    return nouveauL;
}
TypeCellule* InsereEnQueu(TypeCellule* l ,int donne)
{
    TypeCellule *nouveau,*ptr;
    nouveau = (TypeCellule*)malloc(sizeof(TypeCellule));
    nouveau->donnee = donne;
    nouveau->suivant = NULL;
    if (EstListeVide(l))
        return nouveau;
    else
    {    
        ptr = l;
        while (ptr->suivant != NULL)
            ptr = ptr->suivant;
        ptr->suivant = nouveau;
    }
    return l;
}
TypeCellule* SuppEnTete(TypeCellule* l)
{
    TypeCellule* ptr;
    if(EstListeVide(l))
        fprintf(stderr,"La liste est vide !\n");
    else
    {
        ptr = l;
        l = l->suivant;
        free(ptr);
    }
    return l;
}
TypeCellule* SuppEnQueu(TypeCellule* l)
{
    TypeCellule *ptr1,*ptr2;
    if (EstListeVide(l))
        fprintf(stderr, "La liste est vide !\n");
    else
    {
        ptr1 = l;
        ptr2 = ptr1->suivant;
        while(ptr2->suivant != NULL)
        {
            ptr1 = ptr1->suivant;
            ptr2 = ptr2->suivant;
        }
        ptr1->suivant = NULL;
        free(ptr2);
    }
    return l;
}
void Affichage(TypeCellule* l)
{
    TypeCellule* ptr;
    ptr = l;
    while (ptr != NULL)
    {
        printf("[%d]\t",ptr->donnee);
        ptr = ptr->suivant;
    }
}
int SommeListe(TypeCellule* l)
{
    TypeCellule *ptr;
    int s=0;
    ptr = l;
    while(ptr != NULL)
    {
        s += ptr->donnee;
        ptr = ptr->suivant;
    }
    return s;
}
TypeCellule* Recherche(TypeCellule* l,int n)
{
    TypeCellule *ptr;
    ptr = l;
    while(ptr != NULL)
    {
        if(ptr->donnee == n)
            return ptr;
        ptr = ptr->suivant;
    }
    return NULL;
}
TypeCellule* CreatListeTab(int *tab , int n)
{
    TypeCellule *l = ListeVide();
    int i;
    for(i=0;i<n;i++)
        l = InsereEnQueu(l,tab[i]);
    return l;
}
int NbrElemListe(TypeCellule* l)
{
    TypeCellule *ptr;
    int nbrelem=0;
    ptr = l;
    while(ptr != NULL)
    {
        nbrelem++;
        ptr = ptr->suivant;
    }
    return nbrelem;
}
int* CreatTabListe(TypeCellule* l)
{
    int *tab = (int*)malloc(sizeof(int)*NbrElemListe(l));
    TypeCellule *ptr;
    int i=0;
    while (ptr != NULL)
    {
        tab[i] = ptr->donnee;
        i++;
        ptr = ptr->suivant;
    }
    return tab;
}
TypeCellule* ListeInverse(TypeCellule* l)
{
    TypeCellule *inverseL,*ptr;
    inverseL = ListeVide();
    ptr = l;
    while(ptr != NULL)
    {
        inverseL=InsereEnTete(inverseL,ptr->donnee);
        ptr = ptr->suivant;
    }
    return inverseL;
}
TypeCellule* RecopieListe(TypeCellule* l)
{
    TypeCellule *inverseL,*ptr;
    inverseL = ListeVide();
    ptr = l;
    while(ptr != NULL)
    {
        inverseL=InsereEnQueu(inverseL,ptr->donnee);
        ptr = ptr->suivant;
    }
    return inverseL;
}
TypeCellule* SuppX(TypeCellule* l , int donnee)
{
    TypeCellule *ptr1,*ptr2;
    if(EstListeVide(l))
        fprintf(stderr,"La liste est vide !\n");
    else
    {
        ptr1 = l;
        if(l->donnee == donnee)
        {
            l = l->suivant;
            free(ptr1);
        }
        else
        {
            ptr2 = ptr1->suivant;
            while(ptr2->donnee != donnee && ptr2 != NULL)
            {
                ptr1 = ptr1->suivant;
                ptr2 = ptr2->suivant;
            }
            if(ptr2->donnee = donnee)
            {
                ptr1->suivant = ptr2->suivant;
                free(ptr2);
            }
        }
    }
    return l;
}
int NbrX(TypeCellule* l , int donnee)
{
    int n=0;
    TypeCellule *ptr;
    ptr = l;
    while(ptr != NULL)
    {
        if(ptr->donnee == donnee)
            n++;
        ptr = ptr->suivant;
    }
    return n;
}
TypeCellule* SuppXX(TypeCellule* l , int donnee)
{
    int i,n;
    if(EstListeVide(l))
        fprintf(stderr, "La liste est vide !\n");
    else
    {
        n=NbrX(l,donnee);
        for(i=0;i<n;i++)
            l=SuppX(l,donnee);
    }
    return l;
}
TypeCellule* ConcatListe(TypeCellule* l1 , TypeCellule* l2)
{
    TypeCellule *ptr;
    ptr = l1;
    if(EstListeVide(l1))
        return l2;
    else
    {
        while(ptr->suivant != NULL)
            ptr = ptr->suivant;
        ptr->suivant = l2;
        return l1;
    }
}
TypeCellule* ConcatListePlus(TypeCellule* l1,TypeCellule* l2)
{
    TypeCellule *ptr,*l3;
    l3 = ListeVide();
    ptr = l1;
    while (ptr != NULL)
    {
        l3 = InsereEnQueu(l3,ptr->donnee);
        ptr = ptr->suivant;
    }
    ptr = l2;
    while (ptr != NULL)
    {
        l3 = InsereEnQueu(l3,ptr->donnee);
        ptr = ptr->suivant;
    }
    return l3;
}
