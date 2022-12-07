#include <vector>
#include "bibliotheque.h"
#include "lecteur.h"
#include "auteur.h"
#include "livre.h"

namespace bibli{
	Bibliotheque::Bibliotheque(){
		//Comment initialiser les vector? prendre position 0 pour que les vector soient pas vide?
		Lecteur LecteurA;
		Auteur AuteurA;
		Livre LivreA;

		_listeLecteur.push_back(LecteurA);
		_listeAuteur.push_back(AuteurA);
		_listeLivre.push_back(LivreA);
	}

	void Bibliotheque::addLecteur(bibli::Lecteur lecteur){
		_listeLecteur.push_back(lecteur);
	}

	void Bibliotheque::addAuteur(bibli::Auteur auteur){
		_listeAuteur.push_back(auteur);
	}

	void Bibliotheque::addLivre(bibli::Livre livre){
		_listeLivre.push_back(livre);
	}

}