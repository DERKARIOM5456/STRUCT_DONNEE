#include "Biblio.h"
#include<stdio.h>
int main()
{
	File F;
	int Donnee;
	int Sommet;
	F=InitialiserFile(5);
	Enfiler(&F,1);
	Enfiler(&F,2);
	Enfiler(&F,3);
	Enfiler(&F,4);
	Defiler(&F,&Donnee);
	Enfiler(&F,5);
	AfficherFile(F);
	printf("\nFile Pleine=%d\n",EstFilePleine(F));
	Defiler(&F,&Donnee);
	Enfiler(&F,6);
	Defiler(&F,&Donnee);
	Enfiler(&F,7);
	Defiler(&F,&Donnee);                              Enfiler(&F,8);
	Defiler(&F,&Donnee);                              Enfiler(&F,9);
	Defiler(&F,&Donnee);                              Enfiler(&F,10);
	AfficherFile(F);
	printf("\nTab[0]=%d",F.Tableau[0]);
	printf("\nFile Vide=%d",EstFileVide(F));
	SommetFile(F,&Sommet);
	printf("\nLE SOMMET=%d\n",Sommet);
	Defiler(&F,&Donnee);
	Defiler(&F,&Donnee);
	Defiler(&F,&Donnee);
	Defiler(&F,&Donnee);
	printf("\nFile Vide=%d",EstFileVide(F));
	printf("\nFile Pleine=%d",EstFilePleine(F));
	return 0;
}
