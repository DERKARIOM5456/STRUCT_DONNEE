#ifndef LISTE_H
#define LISTE_H
    typedef struct cell
    {
        int donnee;
        struct cell* suivant;
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
#endif