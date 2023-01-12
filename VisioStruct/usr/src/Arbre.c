#include <stdio.h>
#include <stdlib.h>
#include "../include/Arbre.h"
arbre *nouveauA()
{
    arbre *b;
    b = NULL;
    return b;
}
int EstArbreVide(arbre* b)
{
    return (b==NULL);
}
void AffichagePrefixe(arbre *b)
{
    if(!EstArbreVide(b))
    {
        printf("[%d]\t",b->donnee);
        AffichagePrefixe(b->g);
        AffichagePrefixe(b->d);
    }
}
void AffichageInfixe(arbre *b)
{
    if(!EstArbreVide(b))
    {
        AffichageInfixe(b->g);
        printf("[%d]\t",b->donnee);
        AffichageInfixe(b->d);
    }
} 
void AffichagePostfixe(arbre* b)
{
    if(!EstArbreVide(b))
    {
        AffichagePostfixe(b->g);
        AffichagePostfixe(b->d);
        printf("[%d]\t",b->donnee);
    }
}
arbre *InsereRacineD(arbre* b,int donnee)
{
    arbre *a = (arbre*)malloc(sizeof(arbre));
    a->donnee = donnee;
    a->g = NULL;
    if(b==NULL)
    {
        a->d = NULL;
        b = a;
    }
    else
    {
        a->d = b;
        b = a;
    }
    return b;
}
arbre *InsereRacineG(arbre* b,int donnee)
{
    arbre *a = (arbre*)malloc(sizeof(arbre));
    a->donnee = donnee;
    a->d = NULL;
    if(b==NULL)
    {
        a->g = NULL;
        b = a;
    }
    else
    {
        a->g = b;
        b = a;
    }
    return b;
}
arbre *InsereFeuilleD(arbre* b,int donnee)
{
    arbre *a = (arbre*)malloc(sizeof(arbre));
    arbre *ptr;
    a->donnee = donnee;
    a->g = NULL;
    a->d = NULL;
    if(EstArbreVide(b))
        b = a;
    else
    {
        ptr = b;
        while(ptr->d!=NULL)
            ptr = ptr->d;
        ptr->d = a;
    }
    return b;
}
arbre *InsereFeuilleG(arbre* b,int donnee)
{
    arbre *a = (arbre*)malloc(sizeof(arbre));
    arbre *ptr;
    a->donnee = donnee;
    a->g = NULL;
    a->d = NULL;
    if(EstArbreVide(b))
        b = a;
    else
    {
        ptr = b;
        while(ptr->g!=NULL)
            ptr = ptr->g;
        ptr->g = a;
    }
    return b;
}
void SommeElement(arbre* b,int *p)
{
    if(b==NULL)
        printf("\nArbre vide");
    
    else
        *p =  b->donnee;
}
/*int MaxElement(arbre* b)
{
    if(!EstArbreVide(b))
    {
        
    }
}
int MinElement(arbre* b)
{

}*/
