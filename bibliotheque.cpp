#include <vector>
#include "date.h"
#include "bibliotheque.h"
#include "lecteur.h"
#include "auteur.h"
#include "livre.h"
#include "emprunt.h"

namespace bibli{
	Bibliotheque::Bibliotheque(){
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

	void Bibliotheque::addEmprunt(Emprunt emprunt){
		_listeEmprunt.push_back(emprunt);
	}

	void Bibliotheque::Emprunter(Livre livre, Lecteur lecteur){
		if(livre.getDispo()){
			//Creer un emprunt
			Emprunt empruntA(date::Date(1,1,2002), livre.getISBN(), lecteur.getIdent()); // la date d'emprunt est fausse
			//TODO : vérifier que livre est dans la liste? Et que l'on emprunte pas plusieurs fois le même livre
			addEmprunt(empruntA);
			livre.addToList(lecteur.getIdent());
			lecteur.addToList(livre.getISBN());
		}else{
			std::cout << "Livre pas disponible" << std::endl;
		}

	}

}