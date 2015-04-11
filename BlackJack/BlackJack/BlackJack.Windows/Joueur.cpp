#include "joueur.h"
#include <iostream>
#include <string>

using namespace std;

//Pour la banque en overstack ?
Joueur::Joueur(std::string mail, std::string pseudo, std::string mdp) : m_mail(mail), m_pseudo(pseudo), m_mdp(mdp), m_cash(1000)
{
	//zone qui sert � rien
}

//verification sur le cash
int Joueur::verifCash(int m_cash)
{
	if (m_cash<0)
	{
		return 0;
	}
	else
	{
		return m_cash;
	}
}

//init de fonction de saisie
void Joueur::setName(std::string m_pseudo)
{
	this->m_pseudo = m_pseudo;
}
void Joueur::setMdp(std::string m_mdp)
{
	this->m_mdp = m_mdp;
}
void Joueur::setCash(int m_cash)
{
	this->m_cash = m_cash;
}

//init de fonction finale
void Joueur::saisie()
{
	cout << "Username input : "; cin >> this->m_pseudo;
	cout << "MDP input : "; cin >> this->m_mdp;
	cout << "Combien de cash ? " << m_cash << endl;
}