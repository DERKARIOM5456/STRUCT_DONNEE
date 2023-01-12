#ifndef __ARBRE__
#define __ARBRE__
typedef struct arbre
{
    int donnee;
    struct arbre *d;
    struct arbre *g;
}arbre;
arbre *nouveauA();
int EstArbreVide(arbre*);
void AffichagePrefixe(arbre*); // On visite :  Rprincipale SAgauche SAdroite
void AffichageInfixe(arbre*); // On visite SAgauche Rprincipale SAdroite
void AffichagePostfixe(arbre*); // On visite : SAgauche SAdroite RPrincipale
arbre *InsereRacineD(arbre*,int);
arbre *InsereRacineG(arbre*,int);
arbre *InsereFeuilleD(arbre*,int);
arbre *InsereFeuilleG(arbre*,int);
void SommeElement(arbre*,int*);
//int MaxElement(arbre*);
//int MinElement(arbre*);

#endif