#include "lecteur.h"
#include <string>
#include <vector>

namespace bibli{
Lecteur::Lecteur(std::string ident, std::string nom, std::string prenom): _ident(ident), _nom(nom), _prenom(prenom) {
	 _listeisbn.push_back("Liste ISBN emprunt");

}
    std::string Lecteur::getIdent(){
        return _ident;
    }

    std::string Lecteur::getNom(){
        return _nom;
    }

    std::string Lecteur::getPrenom(){
        return _prenom;
    }
 void Lecteur::AfficherLecteur(){
 	 std::cout << getIdent() << "" << getNom() << "" << getPrenom() << std::endl;
 }
}