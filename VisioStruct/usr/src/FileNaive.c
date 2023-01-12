#include<stdio.h>
#include<stdlib.h>
#include "Biblio.h"
File InitialiserFile(int Max)
{
	File F;
	F.IndiceQueue=-1;
	F.IndiceTete=0;
	F.Tableau=(int*)calloc(Max,sizeof(int));
	F.MaxElem=Max;
	return F;
}
int EstFileVide(File F)
{	
	return(F.IndiceQueue==-1);
}
int EstFilePleine(File F)
{
	return(F.IndiceQueue==F.MaxElem-1);
}
int Enfiler(File *F,int elem)
{
	if(F->IndiceQueue==F->MaxElem-1)
		return(1);
	F->IndiceQueue++;
	F->Tableau[F->IndiceQueue]=elem;
	return(0);
}
int Defiler(File *F,int *DonneeEnfilee)
{
	if(F->IndiceQueue==-1)
		return(1);
	*DonneeEnfilee=F->Tableau[F->IndiceTete];
	F->IndiceTete++;
	return 0;
}
void AfficherFile(File F)
{
	int i=0;
	if(EstFileVide(F))
		printf("\nLA FILE EST VIDE,SORRY");
	while(i<=F.IndiceQueue)
	{
		printf("\t%d",F.Tableau[i]);
		i++;
	}
}
int SommetFile(File F,int *Sommet)
{
	if(F.IndiceQueue==-1)
		return 1;
	*Sommet=F.Tableau[F.IndiceTete];
	return 0;
}

void ViderFile(File *F)
{
	F->IndiceTete=0;
	F->IndiceQueue=-1;
}
void DetruireFile(File *F)
{
	if(F->MaxElem!=0)
		free(F->Tableau);
	F->MaxElem=0;
}
