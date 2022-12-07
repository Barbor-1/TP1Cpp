#include "auteur.h"

Auteur::Auteur(std::string identifiant, std::string nom, std::string prenom, date::Date naissance) : _identifiant(identifiant), _nom(nom), _prenom(prenom), _naissance(naissance) {

}

std::string Auteur::getNom(){
	return _nom;
}

std::string Auteur::getPrenom(){
	return _prenom;
}

std::string Auteur::getNomEntier(){
	return (_nom + " " + _prenom);
}