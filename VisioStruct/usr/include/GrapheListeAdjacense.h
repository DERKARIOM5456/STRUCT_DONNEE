typedef struct CellSommet
{
	int Numero;
	struct CellArc *ListeArc;
	struct CellSommet *Suivant;
}TypeSommet;
typedef struct CellArc
{
	struct CellSommet *Extremite;
	 struct CellArc *Suivant;
}TypeArc;
typedef TypeSommet *TypeGraphe;

typedef struct Sommet
{
	int num;
}Sommet;
typedef struct
{
	int n;
	Sommet *TabSommet;
	int **Matrice;
}Graphe;
Graphe *MatriceAdjacense(TypeGraphe G);
