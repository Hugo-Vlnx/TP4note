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

		}
		printf("\n");
	}
	
	return 0;
}

int main()
{
	int n = 5;
	int grille[9][9];
	grilleInitiale(grille, n);
	return 0;


}