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
    ptr = l;
    while (ptr->suivant != NULL)
        ptr = ptr->suivant;
    ptr->suivant = nouveau;
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