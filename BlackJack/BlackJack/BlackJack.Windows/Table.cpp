#include "table.h"
#include <iostream>
#include <string>

using namespace std;

Table::Table(){
	//listJoueur
	//paquet 
}

//parametre i : compteur pour selectionner le bon joueur
void Table::distribution(int i){
	Carte carte = paquet.front();			//r�cup�re la premiere carte au dessus du paquet
	listeJoueur.get(i).setCarte(carte);		//attribut la carte au joueur
	paquet.pop();							//enleve la carte selectionn�z du paquet
}

void Table::melange(){
	//312 cartes a tri� si 6 jeux de carte selectionn�e
	int i;							//compteur
	int random;						//valeur random g�n�r� servant d'index
	int nbCarte = jeuxCarte.size;	// contient le nombre de carte restant

	for (i = 0; i < jeuxCarte.size; i++){

		//sens� trouver un nombre entre 0 et nbCarte
		random = rand() % nbCarte + 0;	

		// extraire la carte de jeuxCarte � l'index random et la mettre dans la queue paquet
		
		
	}
}