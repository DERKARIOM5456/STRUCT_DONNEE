#include "../Liste/Liste.h"
#ifndef __DLISTE__
#define __DLISTE__
typedef struct dcell
{
    int donnee;
    struct dcell *next;
    struct dcell *back;
}dcell,*dliste;
dliste DListeVide();
int EstDListeVide(dliste);
int EstDListeTrier(dliste);
void SommetDListe(dliste,int);
int NbreElmDListe(dliste);
dliste TrieDListe(dliste);
dliste InsereEnTete(dliste,int);
dliste InsereEnQueue(dliste,int);
dliste InsereEnPosition(dliste,int);
dliste SuppEnTete(dliste);
dliste SuppEnQueu(dliste);
dliste SuppEnPosition(dliste);
void Affichage(dliste);
dliste Recherche(dliste);
dliste ConcatDlistePlus(dliste,dliste);
dliste ConvertListeInDListe(TypeCellule*);
void ClearDListe(dliste);
#endif