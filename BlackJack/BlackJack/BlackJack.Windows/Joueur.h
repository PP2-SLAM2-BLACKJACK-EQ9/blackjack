#ifndef JOUEUR_H
#define JOUEUR_H
#include <string>
#include <queue>
#include "Carte.h"

class Joueur
{
public:
	//init du constructeur
	Joueur();

	//la même pour la banque en overstack
	Joueur(std::string mail, std::string pseudo, std::string mdp);

	//Accès (exemples)
	void setName(std::string m_pseudo);
	void setMdp(std::string m_mdp);
	void setCash(int m_cash);

	//Check
	int verifCash(int m_cash);

	//Pas de Send et -w pour le moment

	//Décla pour après
	void saisie();
	void affiche();

private:
	//Les attributs en privé, parce que bidouilleurs
	std::string m_mail;					
	std::string m_pseudo;
	std::string m_mdp;
	int m_cash;						// contient la totalité de l'argent qu'a le joueur
	queue<Carte> lesCartes;			// contient les cartes  du joueurs
};

#endif // JOUEUR_H