#ifndef Livre_H
#define Livre_H
#include <string>
#include <vector>
#include "date.h"
#include "auteur.h"

namespace bibli{
    class Livre{
        public:
        Livre(std::string titre = "Hypersensible & introverti", Auteur auteur = Auteur("00000000", "DuMoulin", "Jean"), std::string genre = "Heroic Fantasy", date::Date dateParution= date::Date(1,1,1000), std::string isbn = "0000000000");
        std::string getTitre();
        std::string getAuteur();
        std::string getGenre();
        std::string getISBN();
        date::Date getDate();
        void printEmprunt();
        void printVar();
        
        private:
        std::string _titre;
        Auteur _auteur;
        std::string _genre;
        date::Date _date;
        std::string _isbn;
        std::vector<std::string> _liste; //liste d'emprunt

    };

}

#endif