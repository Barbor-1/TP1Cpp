#include <iostream>
#include <string>
#include <vector>
#include "date.h"
#include "livre.h"
#include "auteur.h"
#include "emprunt.h"
#include "lecteur.h"


int main(int argc, char const *argv[])
{
    /* code */
    date::Date Anniv(13,9,2002);
    std::cout << date::toString(Anniv) << std::endl;
    bibli::Lecteur Test2;
  

    Test2.AfficherLecteur();

    bibli::Livre Test;
    Test.printEmprunt();
    Test.printVar();

    bibli::Auteur Genie;
    std::cout << Genie.getNomEntier() << std::endl;

    return 0;
}