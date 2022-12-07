#include "lecteur.h"
#include <string>
#include <vector>

namespace bibli{
Lecteur::Lecteur(std::string ident, std::string nom, std::string prenom): _ident(ident), _nom(nom), _prenom(prenom) {
	 _listeisbn.push_back("Liste ISBN emprunt");

}
    std::string Lecteur::getIdent() const {
        return _ident;
    }

    std::string Lecteur::getNom() const {
        return _nom;
    }

    std::string Lecteur::getPrenom() const {
        return _prenom;
    }
 void Lecteur::AfficherLecteur() const {
 	 std::cout << getIdent() << "" << getNom() << "" << getPrenom() << std::endl;
 }
}