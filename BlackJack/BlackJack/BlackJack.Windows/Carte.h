#ifndef CARTE_H
#define CARTE_H
#include <string>

class Carte
{
public:

	Carte();				// constructeur


private:
	int m_valeur;			// contient le nb de point de la carte
	std::string figure;		// carr�,coeur,pique,tr�fle


};

#endif