#include<stdio.h>
#include "Biblio.h"
int main()
{
	int Donnee;
	int Sommet;
	File F=FileVide();
	Enfiler(&F,1);
	Enfiler(&F,2);
	Enfiler(&F,3);
	Enfiler(&F,4);
	AfficherFile(F);
	Defiler(&F,&Donnee);
	AfficherFile(F);
	SommetFile(F,&Sommet);
	printf("\nDonnee Defilee=%d",Donnee);
	printf("\nSommet=%d",Sommet);
	DetruireFile(&F);
	return 0;
}

