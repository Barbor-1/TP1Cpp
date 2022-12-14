#ifndef Bibliotheque_H
#define Bibliotheque_H
#include <vector>
#include "lecteur.h"
#include "auteur.h"
#include "livre.h"
#include "emprunt.h"

namespace bibli{
	class Bibliotheque{
		public:
			Bibliotheque();
			void addLecteur(Lecteur lecteur);
			void addAuteur(Auteur auteur);
			void addLivre(Livre livre);
			void addEmprunt(Emprunt emprunt);
			void emprunter(Livre livre, Lecteur lecteur);
			void restituer(std::string isbn, Lecteur lecteur);

		private:
			std::vector<Lecteur> _listeLecteur;
			std::vector<Auteur> _listeAuteur;
			std::vector<Livre> _listeLivre;
			std::vector<Emprunt> _listeEmprunt;
			Emprunt searchEmprunt(std::string isbn, std::string ident);
	};

}
#endif