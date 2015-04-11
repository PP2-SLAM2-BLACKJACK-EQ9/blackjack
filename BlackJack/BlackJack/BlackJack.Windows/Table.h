#ifndef TABLE_H
#define TABLE_H
#include <string>
#include <queue>
#include "Joueur.h"
#include <array>

class Table
{
public:

	Table();									// constructeur
	void distribution(int i);						//methode pour distribuer 1 carte
	void melange();								//methode qui trira dans un ordre aléatoire les cartes

private:

	std::queue<Joueur> listeJoueur;				//liste des joueurs présent sur la table
	std::queue<Carte> paquet;					//liste contenant toutes les cartes mélanger
	std::array<Carte> jeuxCarte;					//liste contenant toutes les cartes

};

#endif;