typedef struct
{
	int MaxElem;
	int IndiceTete;
	int IndiceQueue;
	int *Tableau;
}File;
File InitialiserFile(int);
int EstFileVide(File);
int EstFilePleine(File);
int Enfiler(File*,int);
int Defiler(File*,int*);
void AfficherFile(File);
int SommetFile(File,int*);
void ViderFile(File*);
void DetruireFile(File*);
