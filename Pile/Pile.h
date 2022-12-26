#ifndef PILE_H
#define PILE_H
    typedef struct cell
    {
        int donnee;
        struct cell *suivant;
    }Pile;
    Pile* PileVide();
    int EstPileVide(Pile*);
    int Sommet(Pile*);
    Pile* Empiler(Pile*,int);
    Pile* Depiler(Pile*);
    Pile* Nettoyer(Pile*);
    void Afficher(Pile* p);
#endif