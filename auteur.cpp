#include "auteur.h"

Auteur::Auteur(std::string identifiant, std::string nom, std::string prenom, date::Date naissance) : _identifiant(identifiant), _nom(nom), _prenom(prenom), _naissance(naissance) {

}

std::string getNom(){
	return _nom;
}

std::string getPrenom(){
	return _prenom;
}