#include<stdio.h>
#include<stdlib.h>
#include "../include/GrapheListeAdjacense.h"
Graphe *MatriceAdjacense(TypeGraphe G)
{
	int i;
	Graphe *G1=(Graphe*)malloc(sizeof(Graphe));
 	TypeSommet *tmp=G;
	TypeArc *a;
	G1->n=1;
	while(tmp!=NULL)
	{
		G1->n++;
		tmp=tmp->Suivant;
	}
	G1->TabSommet=(Sommet*)malloc(sizeof(Sommet)*G1->n);
	G1->Matrice=(int**)malloc(sizeof(int*)*G1->n);
	for(i=0;i<G1->n;i++)
		G1->Matrice[i]=(int*)malloc(sizeof(int)*G1->n);
	for(tmp=G;tmp->Suivant!=NULL;tmp=tmp->Suivant)
	{
		a=tmp->ListeArc;
		while(a!=NULL){
			G1->Matrice[tmp->Numero][a->Extremite->Numero]=1;
			a=a->Suivant;
		}
	}
	return G1;
}




