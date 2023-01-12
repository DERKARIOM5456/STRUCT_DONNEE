#Définition d'une file:
----------------------
c'est une structure de donnée dans laquelle on peut inserer et supprimer un élément suivant la règle #FIFO#; c'est à dire premier entré, premier sorti.

#Le Nom File 
-----------
vient d'une analogie avec une file d'attente pour un guichet dans laquelle le premier arrivé sera le premier servi

#Type de Gestion D'une File
--------------------------
Il exite trois maniere de gerer une file:
	1.Gestion naïve par tableau:
	###########################
	2.Gestion Circulaire par tableau:
	#################################
	dans ce cas, si le tableau est plein, on utilise la memoire du début de tableau. on utilise des modulo sur les indices du tableau.
	3.Gestion par Liste Chaînée:
	############################
	on introduit un pointeur sur la tête de file et un pointeur sur la queue de file. ceci nous permet d'inserer des élément en tete et en queue.
