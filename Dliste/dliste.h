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
void SommetDListe(dliste,int*);
int NbreElmDListe(dliste);
dliste TrieDListe(dliste);
dliste InsereEnTeteDL(dliste,int);
dliste InsereEnQueueDL(dliste,int);
dliste InsereEnPositionDL(dliste,int,int);
dliste SuppEnTeteDL(dliste);
dliste SuppEnQueuDL(dliste);
dliste SuppEnPositionDL(dliste,int);
void AffichageDL(dliste);
void RechercheDL(dliste,int);
dliste ConcatDlistePlus(dliste,dliste);
dliste ConvertListeInDListe(TypeCellule*);
dliste ClearDListe(dliste);
#endif