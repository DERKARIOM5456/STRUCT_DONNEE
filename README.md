# BIBLIOTHEQUE DYNAMIQUE POUR LA GESTION DES STRUCTURES DE DONNEES EN LANGAGE C

## PRESENTATION
Ce projet à été elaborer dans le but d'aider les programmeurs à niveau avancé à utiliser les fonctions primitives des structure données (pile,file,liste,dliste,graphe,arbre binaire) sans les implémenter,c'est-à-dire en incluant la bibliothèque de la structure en question

Exemple :  
```c 
#include <Liste.h>
```

**Nb : par convention chaque nom de bibliothèque doit commencer par une lettre capititale**

## AIDE MEMOIRE

### INSTALLATION DU PAQUET

Télécharger le paquet sur le lien suivant : 
Ensuite rendez-vous dans le répertoire du fichier télécharger, puis ouvrez un terminal dans l'actuel répertoire et enfin tapez la commande suivante :
```bash
sudo dpkg -i VisioStruct.deb
```
### COMPILATION

Essayons le code suivant :
```c
#include <Pile.h>
int main()
{
    Pile *p;
    p = PileVide();
    p = Empiler(p,1);
    Affichage(p);
    return 0;
}
```
**Code de compilation** :
```bash
gcc <nomFichier>.c -o <executable> -I /usr/include -L /usr/lib -l visio
```

Si tout c'est bien passé,la sortie du programme serait :
```bash
[1]
```

