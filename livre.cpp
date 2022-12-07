#include "livre.h"

namespace bibli{
    Livre::Livre(std::string titre, std::string auteur, std::string genre, date::Date dateParution, std::string isbn): _titre(titre), _auteur(auteur), _genre(genre), _date(dateParution), _isbn(isbn) {
        _liste.push_back("bibliothèque");
    }

    std::string Livre::getTitre(){
        return _titre;
    }

    std::string Livre::getAuteur(){
        return _auteur;
    }

    std::string Livre::getGenre(){
        return _genre;
    }

    date::Date Livre::getDate(){
        return _date;
    }

    std::string Livre::getISBN(){
        return _isbn;
    }

    void Livre::printEmprunt(){
        for(int i=0; i < _liste.size();i++){
            std::cout << _liste.at(i) << std::endl;
        }
    }

    void Livre::printVar(){
        std::cout << getTitre() << getAuteur() << getGenre() << getISBN() << std::endl;
    }


}