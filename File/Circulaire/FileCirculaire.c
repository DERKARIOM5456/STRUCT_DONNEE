#include<stdio.h>
#include<stdlib.h>
#include "Biblio.h"
int Enfiler(File *F,int elem)
{
	if(EstFilePleine(*F))
		return 1;
	F->IndiceQueue++;
	if(F->IndiceQueue==F->MaxElem)
		F->IndiceQueue=0;
	F->Tableau[F->IndiceQueue]=elem;
	return 0;
}
int Defiler(File *F,int *DonneeDefilee)
{
	if(EstFileVide(*F))
		return 1;
	*DonneeDefilee=F->Tableau[F->IndiceTete++];
	/* 
	 l'instruction ci dessus est équivalent a:
	  *DonneeDefilee=F->Tableau[F->IndiceTete]
	 F->IndiceTete++;
	 */
	if(F->IndiceTete==F->MaxElem)
		F->IndiceTete=0;
	return 0;
}
File InitialiserFile(int Max)
{
	File F;
	F.IndiceTete=0;
	F.IndiceQueue=-1;
	F.MaxElem=Max;
	F.Tableau=(int*)calloc(Max,sizeof(int));
	return F;
}
int EstFileVide(File F)
{
 return(F.IndiceTete==(F.IndiceQueue+1)%F.MaxElem);
}
int EstFilePleine(File F)
{
return(F.IndiceTete==(F.IndiceQueue+2)%F.MaxElem);
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
int SommetFile(File F,int *Donnee)
{
	if(EstFileVide(F))
		return 1;
	*Donnee=F.Tableau[F.IndiceTete];
	return 0;
}
int SaisieFile(File *F)  
{       
        char rep;
	int elem;
	if(EstFilePleine(*F))
		return 1;
        printf("\nENTREZ UN ELEMENT A ENFILER:");
	scanf("%d",&elem);
	Enfiler(F,elem);
	printf("\nVOULEZ VOUS CONTINUEZ A ENFILER?");
	scanf("%s",&rep);
	while(rep=='o')                                   { 
	printf("\nENTREZ UN ELEMENT A ENFILER:");
        scanf("%d",&elem);
        Enfiler(F,elem);
        printf("\nVOULEZ VOUS CONTINUEZ A ENFILER?");                                               
        scanf("%s",&rep);
	}
	return 0;
}
void AfficherFile(File F)
{
	int i=0;
	if(EstFileVide(F))
		printf("\nLE FILE EST VIDE,SORRY.");
        while(i<F.MaxElem)
	{
		printf("\t%d",F.Tableau[i]);
		i++;
	}
	//printf("\t%d",F.Tableau[0]);
}
