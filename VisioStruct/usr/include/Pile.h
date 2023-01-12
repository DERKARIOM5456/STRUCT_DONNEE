#ifndef PILE_H
#define PILE_H
    typedef struct Pcell
    {
        int donnee;
        struct Pcell *suivant;
    }Pile;
    Pile* PileVide();
    int EstPileVide(Pile*);
    int sommet(Pile*);
    Pile* Empiler(Pile*,int);
    Pile* Depiler(Pile*);
    Pile* Nettoyer(Pile*);
    void Afficher(Pile* p);
#endif