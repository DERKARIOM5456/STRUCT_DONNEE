typedef struct
{
	int MaxElem;
	int IndiceQueue;
	int IndiceTete;
	int *Tableau;
}File;
File InitialiserFile(int);
int EstFileVide(File);//Tete=(Queue+1)%MaxElem
int EstFilePleine(File);//Tete=(Queue+2)%MaxElem
void AfficherFile(File);
int Enfiler(File*,int);
int Defiler(File*,int*);
int SommetFile(File,int*);
int SaisieFile(File*);
void ViderFile(File*);
void Detruire(File*);
