#include<stdio.h>
#include<stdlib.h>
#include "Biblio.h"
File FileVide()                                   {                                                         File F;                                           F.Tete=NULL;                             
	return F;                                 }
int EstFileVide(File F)
{
	return(F.Tete==NULL) ? 1 : 0;
}
int EstFilePleine(File F)
{
	return 0;
}
void Enfiler(File *F,int elem)
{
	TypeCellule *nouv;
	nouv=(TypeCellule*)malloc(sizeof(TypeCellule));
	nouv->Element=elem;
	nouv->Suivant=NULL;
	if(EstFileVide(*F))
		F->Tete=F->Queue=nouv;

	F->Queue->Suivant=nouv;
	F->Queue=nouv;
}
int Defiler(File *F,int *DonneeDefilee)
{
	if(EstFileVide(*F))
		return 1;
	TypeCellule *ptr;
	*DonneeDefilee=F->Tete->Element;
	ptr=F->Tete;//memorisation
	F->Tete=F->Tete->Suivant;
	free(ptr);
	return 0;
}
int SommetFile(File F,int *Sommet)
{
	if(EstFileVide(F))
		return 1;
	*Sommet=F.Tete->Element;
	return 0;
}
void DetruireFile(File *F)
{
	TypeCellule *ptr,*ptr1;
	ptr=F->Tete;
	while(ptr!=NULL)
	{
		ptr1=ptr;
		ptr=ptr->Suivant;
		free(ptr1);
	}
	F->Tete=NULL;
}
void ViderFile(File *F)
{
	DetruireFile(F);
	F->Tete=NULL;//file vide:
}
 void AfficherFile(File F)
{
	TypeCellule *ptr;
	if(EstFileVide(F))
		printf("\nLA FILE EST VIDE.");
	ptr=F.Tete;
	while(ptr!=NULL)
	{
		printf("\t%d",ptr->Element);
		ptr=ptr->Suivant;
	}
}

