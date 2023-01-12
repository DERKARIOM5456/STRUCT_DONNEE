#include "Liste.h"
typedef struct
{
	TypeCellule *Tete;
	TypeCellule *Queue;
}File;
File FileVide();
int EstFileVide(File);
void Enfiler(File*,int);
int Defiler(File*,int*);
void DetruireFile(File*);
void ViderFile(File*);
int SommetFile(File,int*);
void AfficherFile(File);
