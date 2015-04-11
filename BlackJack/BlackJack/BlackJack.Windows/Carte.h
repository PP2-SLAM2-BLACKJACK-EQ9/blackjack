#ifndef CARTE_H
#define CARTE_H
#include <string>

class Carte
{
public:

	Carte();				// constructeur


private:
    int m_valeur;			// contient le nb de point de la carte
	int figure;				// 0:carré, 1:pique, 2:coeur, 3:trefle
    std::string nom;		// as,2...10,valet,dame,roi

};

#endif
