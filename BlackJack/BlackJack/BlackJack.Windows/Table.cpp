#include "table.h"
#include <iostream>
#include <string>

using namespace std;

Table::Table(){
	//listJoueur
	//jeuxCarte initialiser toutes les paquets
}

void Table::distribution(){

}

void Table::melange(){
	//312 cartes a tri� si 6 jeux de carte selectionn�e
	int i;						//compteur
	queue<Carte> classement;	//liste contenant le classement des cartes
	int random;					//valeur random g�n�r� servant d'index
	int nbCarte = jeuxCarte.size; // contient le nombre de carte restant

	for (i = 0; i < jeuxCarte.size; i++){
		
		random = rand() % nbCarte + 0;		//sens� trouv� un nombre entre 0 et jeuxCarte.size
		// ectraire la carte � l'index random et le mettre dans la queue classement

		
	}
}