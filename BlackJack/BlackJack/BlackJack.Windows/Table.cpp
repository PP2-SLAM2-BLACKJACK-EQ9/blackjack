#include "table.h"
#include <iostream>
#include <string>

using namespace std;

Table::Table(){
	//listJoueur
	//paquet 
}

void Table::distribution(){

}

void Table::melange(){
	//312 cartes a tri� si 6 jeux de carte selectionn�e
	int i;						//compteur
	int random;					//valeur random g�n�r� servant d'index
	int nbCarte = jeuxCarte.size; // contient le nombre de carte restant

	for (i = 0; i < jeuxCarte.size; i++){

		//sens� trouver un nombre entre 0 et jeuxCarte.size
		random = rand() % nbCarte + 0;	

		// extraire la carte de jeuxCarte � l'index random et la mettre dans la queue paquet
		
		
	}
}