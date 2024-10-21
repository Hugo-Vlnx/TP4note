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
	return 0;
}

int remplirGrille(int grille[9][9], int n)
{
	int ligne = 0;
	int colonne = 0;
	int valeur = 0;
	int nombreDeModification = 0;
	printf("combien de modification voulez vous faire : ");
	scanf_s("%d", &nombreDeModification);

	for(int i = 0; i < nombreDeModification; i++)
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

int afficherGrille(int grille[9][9], int n )
{
	
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < n; j++)
		{
			if (grille[i][j] == 0)
			{
				printf(" |");
			}
			else
			{
				printf("%d", grille[i][j]);
				printf("|");
			}
			
		}
		printf("\n");
		for (int j = 0; j < n; j++)
		{
			printf("- ");

		}
		printf("\n");
	}
}



int main()
{
	int n = 4;
	int grille[9][9];
	grilleInitiale(grille, n);
	remplirGrille(grille, n);
	afficherGrille(grille, n);


	return 0;


}