// NOTE 14/20

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
		if (verificationGrille(grille, n, ligne, colonne, valeur) == 0)
		{
			if (ligne < n && colonne < n && ligne >= 0 && colonne >= 0) // la ligne et la colonne peuvent valoir 0
			{
				grille[ligne][colonne] = valeur;
			}
			else
			{
				printf("cette case n'existe pas \n");
				i--;

			}
		}
		else
		{
			printf("la valeur n'est pas compris entre 1 et %d ou alors  le nombre est deja present dans la logne ou la colonne \n", n);
			i--;
		}
		
		
	}
	return 0;
}

void afficherGrille(int grille[9][9], int n )
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

int verificationGrille(int grille[9][9], int n, int ligne, int colonne, int valeur)
{
	if( valeur < 1 && valeur >= n) // peut valoir 1
	{
		return 1;
	}
	for (int i = 0; i < n; i++)
	{
		if (grille[i][colonne] == valeur || grille[ligne][i] == valeur) // tu peux le faire en une fois
		{
			return 1;
		}
	}

	return 0;
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