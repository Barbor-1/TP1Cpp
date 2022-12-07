#include "emprunt.h"


namespace bibli{
	Emprunt::Emprunt(date::Date dateEmprunt, std::string isbn, std::string identifiantLecteur) : _dateEmprunt(dateEmprunt), _isbn(isbn), _identifiantLecteur(identifiantLecteur) {

	}
	
	std::string Emprunt::getISBN() const {
	        return _isbn;
	}
}