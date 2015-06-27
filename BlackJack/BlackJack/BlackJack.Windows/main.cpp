#include <iostream>
#include <string>
#include <vector>
#include <queue>
#include <stdlib.h>
#include <time.h> //parce qu'il nous faut ça pour le random, peux servir à afficher le tmeps de partie/heure etc...

using namespace std;

#include "joueur.h"
#include "carte.h"

int main()
{
    Joueur j1, banque;
    cout << "Saisie pseudo Joueur 1" << endl;
    j1.saisie();

    //Test ne restera pas dans main puisque utilisant des élements de classe privée
    //13 cartes par couleur
    //4 couleurs par ID de carte
    //9 valeurs de carte possibles

    int testTableau[52][2];
    int i(0);
    for(i=0;i<52;i++)
    {
        testTableau[i][0]=(i+1);
        //cout << testTableau[rand() % 12+1][0] << " "; (test en valeur complétement random OK)
        //cout << i << " ";
    }
    int j(0);
    int k(1); //pardon pour les noms de variabless littéralement bouyguestelecommesque


    //attention code très crade de proto
    cout << endl;
    for(i=0;i<52;i++)
    {
        while(j<4)
        {
            i=i+1;
            j=j+1;
            testTableau[i][1]=k;
            //cout << i << " " << k << " " << endl;
        }
        j=0;
        i=i-1;
        k=k+1;
    }
    //fin de code très crade de proto
    int numCarte(0);
    int pointCarte(0);
    numCarte=testTableau[rand() %51][0];
    pointCarte=testTableau[numCarte][1];

    //boucle test de random sur 10 tests
    string carteSup("Y");
    int pointsJoueur(0);
    srand (time(NULL));
    while(carteSup=="Y" && pointsJoueur<22)
    {
            cout << endl;
            numCarte=testTableau[rand() %51][0];
            pointCarte=testTableau[numCarte][1];
            cout << endl << "Votre numero de carte est le " << numCarte << " et vaut " << pointCarte << " points" << endl;
            pointsJoueur=pointCarte+pointsJoueur;
            cout << "Vous avez " << pointsJoueur << " points" << endl;
            if(pointsJoueur==21)
            {
                cout << endl << "Vous avez gagne !" << endl; break;
            }
            if(pointsJoueur>21)
            {
                cout << endl << "Perdu !" << endl; break;
            }
            cout << "Voulez vous une autre carte ? [repondre Y pour Oui ou N pour Non] "; cin >> carteSup; cout << endl;
    }
    //uniquement pour tester le seed random
    /*for(i=0;i<20;i++)
    {
        cout << endl << testTableau[rand() % 51][0] << " ";
    }*/
    return 0;
}
