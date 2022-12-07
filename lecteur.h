#ifndef Lecteur_H
#define Lecteur_H
#include "livre.h"
#include <string>
#include <vector>

namespace bibli {
class Lecteur {
public:
	Lecteur(std::string ident = "tomdy", std::string nom = "Dynak", std::string prenom = "Tom");
 	std::string getIdent() const;
    std::string getNom() const;
    std::string getPrenom() const;
    void addToList(std::string isbn);
    void AfficherLecteur() const;
    



private:
	std::string _ident;
	std::string _nom;
	std::string _prenom;
	std::vector<std::string>_listeisbn;


};

}

#endif