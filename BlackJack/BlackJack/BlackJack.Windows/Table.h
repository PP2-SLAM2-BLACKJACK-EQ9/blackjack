#ifndef TABLE_H
#define TABLE_H
#include <string>
#include <queue>
#include <Joueur.h>

class Table
{
public:

	Table();									// constructeur
	void distribution();						//methode pour distribuer 1 carte
	void melange();								//methode qui trira dans un ordre aléatoire les cartes

private:

	std::queue<Joueur> listeJoueur;				//liste des joueurs présent sur la table
	std::queue<Carte> jeuxCarte;				//liste contenant toutes les cartes

};

#endif;