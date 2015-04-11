#include <iostream>
#include <string>
#include <vector>
#include <queue>
#include <stdlib.h>

using namespace std;


int main()
{
	//Test ne restera pas dans main puisque utilisant des élements de classe privée
	//13 cartes par couleur
	//4 couleurs par ID de carte
	//9 valeurs de carte possibles

	int testTableau[52][2];
	int i(0);
	for (i = 0; i<52; i++)
	{
		testTableau[i][0] = (i + 1);
		//cout << testTableau[rand() % 12+1][0] << " "; (test en valeur complétement random OK)
		cout << i << " ";
	}
	int j(0);
	int k(1); //pardon pour les noms de variabless littéralement bouyguestelecommesque


	/* attention code très crade de proto */
	for (i = 0; i<52; i++)
	{
		while (j<4)
		{
			testTableau[i][1] = k;
			i = i + 1;
			j = j + 1;
			//cout << i << " " << k << " " << endl;
		}
		j = 0;
		k = k + 1;
	}
	/* fin de code très crade de proto */
	int numCarte(0);
	int pointCarte(0);
	numCarte = testTableau[rand() % 52][0];
	pointCarte = testTableau[numCarte][1];


	//boucle test de random sur 10 tests
	int carteSup(1);
	int pointsJoueur(0);

	while (carteSup != 0)
	{
		numCarte = testTableau[rand() % 51][0];
		pointCarte = testTableau[numCarte][1];
		cout << "Votre numéro de carte est le " << numCarte << " et vaut " << pointCarte << " points" << endl;
		pointsJoueur = pointCarte + pointsJoueur;
		cout << "Vous avez " << pointsJoueur << " points" << endl;
		cout << "Voulez vous une autre carte ? [repondre 1 ou 0] "; cin >> carteSup; cout << endl;
	}
	for (i = 0; i<100; i++)
	{
		cout << testTableau[rand() % 3][0] << " ";
	}
	return 0;
}
