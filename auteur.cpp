#include "auteur.h"


namespace bibli{
	Auteur::Auteur(std::string identifiant, std::string nom, std::string prenom, date::Date naissance) : _identifiant(identifiant), _nom(nom), _prenom(prenom), _naissance(naissance) {

	}

	std::string Auteur::getNom() const {
		return _nom;
	}
	
	std::string Auteur::getPrenom() const {
		return _prenom;
	}
	
	std::string Auteur::getNomEntier() const {
		return (_nom + " " + _prenom);
	}

	std::ostream& operator<<(std::ostream& os, Auteur& auteur){
		os << auteur.getPrenom() << " " << auteur.getNom() << std::endl;
		return os;
	}
}