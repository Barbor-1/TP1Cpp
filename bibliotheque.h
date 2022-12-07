#ifndef Bibliotheque_H
#define Bibliotheque_H
#include <vector>
#include "lecteur.h"
#include "auteur.h"
#include "livre.h"

namespace bibli{
	class Bibliotheque{
		public:
			Bibliotheque();
		private:
			std::vector<Lecteur> _listeLecteur;
			std::vector<Auteur> _listeAuteur;
			std::vector<Livre> _listeLivre;
	};

}
#endif