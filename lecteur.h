#ifndef Lecteur_H
#define Lecteur_H
#include "livre.h"
#include <string>
#include <vector>

namespace lecteur {
class Lecteur {
public:
	Lecteur(std::string ident = "tomdy", std::string nom = "Dynak", std::string prenom = "Tom");
 	std::string getIdent();
    std::string getNom();
    std::string getPrenom();
    void AfficherLecteur();
    



private:
	std::string _ident;
	std::string _nom;
	std::string _prenom;


};

}

#endif