#include "Biblio.h"
#include<stdio.h>
int main()
{
	File F;
	int Sommet;
	int DonneeDefilee;
	F=InitialiserFile(5);
	Enfiler(&F,1);
	Enfiler(&F,2);
	Enfiler(&F,3);
	Enfiler(&F,4);
	Enfiler(&F,5);
	Enfiler(&F,6);//file pleine
	AfficherFile(F);
	printf("\nFin d'Affichage.\n");
	Defiler(&F,&DonneeDefilee);
	printf("\nL'ELEMENT DEFILE EST %d",DonneeDefilee);
	SommetFile(F,&Sommet);
	printf("\nLE SOMMET DE LE FILE EST:%d",Sommet);
	ViderFile(&F);
	DetruireFile(&F);
	return 0;
}


