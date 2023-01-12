#ifndef LISTE_H
#define LISTE_H
    typedef struct Lcell
    {
        int donnee;
        struct Lcell* suivant;
    }TypeCellule;
    TypeCellule* ListeVide();
    int EstListeVide(TypeCellule*);
    TypeCellule* InsereEnTete(TypeCellule*,int);
    TypeCellule* InsereEnQueu(TypeCellule*,int);
    TypeCellule* SuppEnTete(TypeCellule*);
    TypeCellule* SuppEnQueu(TypeCellule*);
    void Affichage(TypeCellule*);
    int SommeListe(TypeCellule*);
    TypeCellule* Recherche(TypeCellule*,int);
    TypeCellule* CreatListeTab(int*,int);
    int NbrElemListe(TypeCellule*);
    int* CreatTabListe(TypeCellule*);
    TypeCellule* ListeInverse(TypeCellule*);
    TypeCellule* RecopieListe(TypeCellule*);
    TypeCellule* SuppX(TypeCellule*,int);
    int NbrX(TypeCellule*,int);
    TypeCellule* SuppXX(TypeCellule*,int);
    TypeCellule* ConcatListe(TypeCellule*,TypeCellule*);
    TypeCellule* ConcatListePlus(TypeCellule*,TypeCellule*);
#endif
