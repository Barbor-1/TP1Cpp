#include "livre.h"

namespace bibli{
    Livre::Livre(std::string titre, Auteur auteur, std::string genre, date::Date dateParution, std::string isbn): _titre(titre), _auteur(auteur), _genre(genre), _date(dateParution), _isbn(isbn) {
        _liste.push_back("bibliothèque");
    }

    std::string Livre::getTitre() const {
        return _titre;
    }

    std::string Livre::getAuteur() const {
        return _auteur.getNomEntier();
    }

    std::string Livre::getGenre() const {
        return _genre;
    }

    date::Date Livre::getDate(){
        return _date;
    }

    std::string Livre::getISBN() const {
        return _isbn;
    }

    void Livre::printEmprunt() const {
        for(int i=0; i < _liste.size();i++){
            std::cout << _liste.at(i) << std::endl;
        }
    }

    void Livre::printVar() const {
        std::cout << getTitre() << " " << getAuteur() << " " << getGenre() << " " << getISBN() << std::endl;
    }


}