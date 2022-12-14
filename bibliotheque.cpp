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

	void Bibliotheque::emprunter(Livre livre, Lecteur lecteur){
		if(livre.getDispo()){
			//Creer un emprunt
			Emprunt empruntA(date::Date(1,1,2002), livre.getISBN(), lecteur.getIdent()); // la date d'emprunt est fausse
			livre.setDispo(false);
			//TODO : vérifier que livre est dans la liste? Et que l'on emprunte pas plusieurs fois le même livre
			addEmprunt(empruntA);
			livre.addToList(lecteur.getIdent());
			lecteur.addToList(livre.getISBN());
		}else{
			std::cout << "Livre pas disponible" << std::endl;
		}

	}

	void Bibliotheque::restituer(std::string isbn, Lecteur lecteur){ //un lecteur a seulement sa propre ident, donc il peut pas restituer pour un autre
		searchEmprunt(isbn,lecteur.getIdent()).disable();
		//lecteur enleve le livre de sa liste

	}

	Emprunt Bibliotheque::searchEmprunt(std::string isbn, std::string ident){
		for (int i = 0; i < _listeEmprunt.size(); i++){
			if ((_listeEmprunt.at(i).getISBN() == isbn) && (_listeEmprunt.at(i).getIdent() == ident)){
				return _listeEmprunt.at(i);
			}
		}
	}
}