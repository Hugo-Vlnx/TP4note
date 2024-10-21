#include <stdio.h>
#include <stdlib.h>




int grilleInitiale(int grille[9][9], int n ) //n représente la taille de la grille
{
	
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < n; j++)
		{
			grille[i][j]=0;
		}
	}
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < n; j++)
		{
			printf("%d", grille[i][j]);
			printf(" ");
		}
		printf("\n");
	}
	
	return 0;
}

int remplirGrille(int grille[9][9], int n)
{
	int ligne = 0;
	int colonne = 0;
	int valeur = 0;
	int nombreDeBoucle = 0;
	printf("combien de case voulez vopus remplir");
	scanf_s("%d", &nombreDeBoucle);

	for(int i = 0; i < nombreDeBoucle; i++)
	{
		printf("entrer la ligne:");
		scanf_s("%d", &ligne);
		printf("entrer la colonne:");
		scanf_s("%d", &colonne);
		printf("entrer la valeur:");
		scanf_s("%d", &valeur);
		if (ligne < n && colonne < n)
		{
			grille[ligne][colonne] = valeur;
		}
		else
		{
			printf("cette case n'existe pas \n");
			i--;

		}
		
		
	}

	return 0;


}

int main()
{
	int n = 2;
	int grille[9][9];
	grilleInitiale(grille, n);
	remplirGrille(grille, n);



	return 0;


}