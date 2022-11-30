#ifndef Livre_H
#define Livre_H
#include <string>
#include "date.h"

namespace bibli{
    class Livre{
        public:
        Livre(std::string titre = "Hypersensible & introverti", std::string auteur = "Jean DuMoulin", std::string genre = "Heroic Fantasy", date::Date dateParution= date::Date(1,1), std::string isbn = "0000000000");
        std::string getTitre();
        std::string getAuteur();
        std::string getGenre();
        std::string getISBN();
        date::Date getDate();
        
        private:
        std::string _titre;
        std::string _auteur;
        std::string _genre;
        date::Date _date;
        std::string _isbn;

    };

}

#endif