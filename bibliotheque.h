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
			void Emprunter(Livre livre, Lecteur lecteur);

		private:
			std::vector<Lecteur> _listeLecteur;
			std::vector<Auteur> _listeAuteur;
			std::vector<Livre> _listeLivre;
			std::vector<Emprunt> _listeEmprunt;
	};

}
#endif